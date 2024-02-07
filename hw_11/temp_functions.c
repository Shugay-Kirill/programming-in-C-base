#include <stdio.h>
#include <string.h>
#include "temp_functions.h"

static int sumTempYear;
static int maxTempYear;
static int minTempYear;

void menu()
{
    printf("temperature sensor statistics\n\
            -f FILE NAME\n\
            -m month number, if not, then all months\n\
            -p print date\n\
            -h functions\n");
    printf("input example: prog.exe -f fileName -m");
}

void cgangeIJ(struct sensor *info, int i, int j)
{
    struct sensor temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}

void SortByT(struct sensor *info, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (info[i].t > info[j].t)
                cgangeIJ(info, i, j);
}

unsigned int DateToInt(struct sensor *info)
{
    return info->year << 32 | info->month << 24 | info->day << 16 | info->hour << 8 | info->minute;
}

void SortByDate(struct sensor *info, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (DateToInt(info + i) >= DateToInt(info + j))
                cgangeIJ(info, i, j);
}

void statistics(int numberMouth, int countData, struct sensor *info)
{
    SortByDate(info, countData);
    int sumT = 0;
    int day = 0;
    int min = 100;
    int max = -100;
    int month = info[0].month;
    if (numberMouth == 0)
    {
        for (int i = 0; i < countData; i++)
        {
            if (info[i].month == month)
            {
                if (max < info[i].t)
                    max = info[i].t;
                if (min > info[i].t)
                    min = info[i].t;
                sumT += info[i].t;
                day++;
            }
            else
            {
                printf("\nmonth = %3d; avg t = %4d; max t = %4d; min t = %4d;", month, sumT / day, max, min);
                day = 1;
                sumT = info[i].t;
                month = info[i].month;
                max = info[i].t;
                min = info[i].t;
            }
        }
        printf("\nmonth = %3d; avg t = %4d; max t = %4d; min t = %4d;", month, sumT / day, max, min);
    }
    else
    {
        for (int i = 0; i < countData; i++)
        {
            if (numberMouth == info[i].month)
            {
                if (max < info[i].t)
                    max = info[i].t;
                if (min > info[i].t)
                    min = info[i].t;
                sumT += info[i].t;
                day++;
            }
            if (numberMouth < info[i].month)
                break;
        }
        printf("\nmonth = %3d; avg t = %4d; max t = %4d; min t = %4d;", numberMouth, sumT / day, max, min);
    }
    printf("\nYear:\nagvTemp = %4d; maxTemp = %4d; minTemp = %4d\n",
           (sumTempYear / countData), maxTempYear, minTempYear);
}

void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].t = t;
}

int AddInfo(struct sensor *info, char *openFile)
{
    sumTempYear = 0;
    maxTempYear = -100;
    minTempYear = 100;
    FILE *inputFile;
    if ((inputFile = fopen(openFile, "r")) != NULL)
    {
        printf("\nFile exists nameFile = %s\n", openFile);
    }
    else
    {
        printf("\nFile does not exist\n");
        return -1;
    }
    printf("\nloading data, please wait...\n");
    int counter = 0;
    int countLine = 0;
    int r, year, month, day, hour, minute, t;
    while ((r = fscanf(inputFile, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hour, &minute, &t)) > 0)
    {
        countLine++;
        // check for all data
        if (r < 6)
        {
            char s[20];
            r = fscanf(inputFile, "%[^\n]", s);
            printf("Error: not all data\nline = %d; %s\n", countLine, s);
        }
        // 
        else if (month < 1 || month > 12)
            printf("Error: wrong month = %d\nline = %d;\n", month, countLine);
        // check for correct month
        else if (day < 1 || day > 31)
        {
            // checking odd months
            if ((month % 2 == 1) && (day == 31))
                printf("Error: wrong days = %d in the month = %d\nline = %d\n", day, month, countLine);
            // February check
            else if (month == 2 && day >= 30)
                printf("Error: wrong days = %d in the month = %d\nline = %d\n", day, month, countLine);
        }
        else if (hour < 0 || hour > 24)
            printf("Error: wrong hour = %d\nline = %d;\n", hour, countLine);
        // checking minutes
        else if (minute < 0 || minute > 60)
            printf("Error: wrong minute = %d\nline = %d;\n", minute, countLine);
        // temperature check
        else if (t < -100 && t > 100)
            printf("Error: wrong temperature not separately t = %d\nline = %d;\n", t, countLine);
        else
        {
            AddRecord(info, counter++, year, month, day, hour, minute, t);
            // addition to annual figures
            sumTempYear += t;
            if (maxTempYear < t)
                maxTempYear = t;
            if (minTempYear > t)
                minTempYear = t;
        }
    }
    fclose(inputFile);
    return counter;
}

void printData(struct sensor *info, int number)
{
    printf("\nPrint date\n");
    printf("===================================\n");
    SortByDate(info, number);
    for (int i = 0; i < number; i++)
        printf("%04d-%02d-%02d-%02d-%02d t=%3d\n",
               info[i].year,
               info[i].month,
               info[i].day,
               info[i].hour,
               info[i].minute,
               info[i].t);
}

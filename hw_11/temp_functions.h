#include <stdint.h>
#define SIZE 600000
struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};

// program menu
void menu();

// exchange of elements
void cgangeIJ(struct sensor *info, int i, int j);

// sort by temperature
void SortByT(struct sensor *info, int n);

// converting date to number
unsigned int DateToInt(struct sensor *info);

// sort by date
void SortByDate(struct sensor *info, int n);

// add record 
void AddRecord(struct sensor *info, int number, 
                uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t t);

// data scanning and recording
int AddInfo(struct sensor *info, char *openFile);

// print data
void printData(struct sensor *info, int number);

// statistics by month and year
void statistics(int numberMouth, int countDate, struct sensor *info);

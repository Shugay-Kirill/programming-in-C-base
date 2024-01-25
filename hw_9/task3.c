#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1000
#define INPUTFILENAME "input.txt"
#define OUTPUTFILENAME "output.txt"

void inputFromFile(char *string)
{
    FILE *input;
    input = fopen(INPUTFILENAME, "r");
    while (fscanf(input, "%[^\n]", string) == 1);
    fclose(input);
}

int numberInString(char *string, int *arrayNumber)
{
    int countNumber = 0;
    int number = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            while (string[i] >= '0' && string[i] <= '9')
            {
                number = number * 10 + (string[i] - '0');
                i++;
            }
            arrayNumber[countNumber++] = number;
            number = 0;
        }
    }
    return countNumber;
}

int comparator(const int *a, const int *b)
{
    return *a - *b;
}

void qsortArray(int size, int a[])
{
    qsort(a, size, sizeof(int), (int (*)(const void *, const void *))comparator);
}

void outputFromFile(int sizeArrayNumber, int *arrayNumber)
{
    FILE *output;
    output = fopen(OUTPUTFILENAME, "w");
    for (int i = 0; i < sizeArrayNumber; i++)
    {
        fprintf(output, "%d ", arrayNumber[i]);
    }
}

int main(int argc, char const *argv[])
{
    char string[SIZE];
    int arrayNumber[SIZE];
    inputFromFile(string);
    int sizeArrayNumber = numberInString(string, arrayNumber);
    qsortArray(sizeArrayNumber, arrayNumber);
    outputFromFile(sizeArrayNumber, arrayNumber);
    return 0;
}

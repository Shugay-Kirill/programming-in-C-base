#include <stdio.h>
#include <string.h>
#include "func.h"

void inputFromFile(char *inputFileName, char *string)
{
    FILE *inputFile;
    if ((inputFile = fopen(inputFileName, "r")) == NULL)
    {
        perror("Error occured while opening input file!\n");
        return;
    }

    fscanf(inputFile, "%[^\n]", string);
    fclose(inputFile);
}

void delSpace(char *string, char *res)
{
    int j = 0;
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            if (j == 0)
                continue;
            if (string[i + 1] == ' ')
                continue;
        }
        res[j] = string[i];
        j++;
    }
}

void outputFromFile(char *outputFileName, char *res)
{
    FILE *outputFile;
    char *outputFN = outputFileName;
    if ((outputFile = fopen(outputFN, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return;
    }
    fprintf(outputFile, "%s", res);
    fclose(outputFile);
}
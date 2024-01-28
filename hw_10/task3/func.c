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

void outputFromFile(char *outputFileName, char *string)
{
    FILE *outputFile;
    char *outputFN = outputFileName;
    if ((outputFile = fopen(outputFN, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return;
    }

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        if (string[i] == '/')
        {
            strcat(string, ".html");
            fprintf(outputFile, "%s", string);
            break;
        }
        else if (string[i] == '.')
        {
            for (int j = 0; j < i; j++)
            {
                fprintf(outputFile, "%c", string[j]);
            }
            fprintf(outputFile, ".html");
            break;
        }
    }    
    fclose(outputFile);
}
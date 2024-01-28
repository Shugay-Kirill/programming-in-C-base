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

void swapLetters(char *string)
{
    int sizeString;
    (strlen(string) % 2 == 0) ? (sizeString = strlen(string) - 1): (sizeString = strlen(string));
    for (int i = 0; i < sizeString; i+=2)
    {
        if (string[i + 1] != ' ')
        {
            char temp = string[i];
            string[i] = string[i + 1];
            string[i + 1] = temp;
            
        }
        else
        {
            int j = i+1;
            while(string[j] == ' ')
                j++;
            char temp = string[i];
            string[i] = string[j];
            string[j] = temp;
            i = j-1;
        }
    }   
}

void outputFromFile(char *outputFileName, char *string)
{
    FILE *outputFile;
    char * outputFN = outputFileName;
    if ((outputFile = fopen(outputFN, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return;
    }
    fprintf(outputFile, "%s", string);
    fclose(outputFile);
}
#define SIZE 1000
#define INPUTFILENAME "input.txt"
#define OUTPUTFILENAME "output.txt"

#include <stdio.h>
#include <string.h>

void inputFromFile(char *string)
{
    FILE *input;
    input = fopen(INPUTFILENAME, "r");
    while (fscanf(input, "%[^\n]", string) == 1);
    fclose(input);
}

void outputFromFile(char *string)
{
    FILE *output;
    output = fopen(OUTPUTFILENAME, "w");
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = i+1; j < strlen(string); j++)
        {
            if (string[i] == string[j])
            {
                string[j] = ' ';
            }   
        }
        if (string[i] != ' ')
        {
            fprintf(output, "%c", string[i]);
        }
    }
    fclose(output);
}

int main(int argc, char const *argv[])
{
    char string[SIZE];
    inputFromFile(string);
    outputFromFile(string);
    return 0;
}

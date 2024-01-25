#define SIZE 1000
#define INPUTFILENAME "input.txt"
#define OUTPUTFILENAME "output.txt"

#include <stdio.h>
#include <string.h>

void inputFromFile(char *string, char *result)
{
    FILE *input;
    input = fopen(INPUTFILENAME, "r");
    int maxLenWord = 0;
    
    while (fscanf(input, "%s", string) == 1)
    {
        if (maxLenWord < strlen(string)){
            strcpy(result, string);
            maxLenWord = strlen(string);
        }
    }
    fclose(input);
}

void outputFromFile(char* result)
{
    FILE *output;
    output = fopen(OUTPUTFILENAME, "w");
    fprintf(output, "%s", result);
    fclose(output);
}

int main(int argc, char const *argv[])
{
    char string[SIZE];
    char result[SIZE];
    inputFromFile(string, result);
    outputFromFile(result);
    return 0;
}

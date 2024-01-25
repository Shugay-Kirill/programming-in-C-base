#include <stdio.h>
#include <string.h>

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

void outputFromFile(char *string)
{
    FILE *output;
    output = fopen(OUTPUTFILENAME, "w");
    for (int i = 0; i < strlen(string); i++)
    {
        switch(string[i]){
            case 'a': 
                fprintf(output, "b");
                break;
            case 'A': 
                fprintf(output, "B");
                break;
            case 'b': 
                fprintf(output, "a");
                break;
            case 'B': 
                fprintf(output, "A");
                break;
            default:
                fprintf(output, "%c", string[i]);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    char string[SIZE];
    inputFromFile(string);
    outputFromFile(string);
    return 0;
}

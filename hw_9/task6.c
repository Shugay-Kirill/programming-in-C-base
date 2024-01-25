#define SIZE 1000
#define INPUTFILENAME "input.txt"
#define OUTPUTFILENAME "output.txt"

#include <stdio.h>
#include <string.h>

int inputFromFile(char *string)
{
    FILE *input;
    input = fopen(INPUTFILENAME, "r");
    int countA = 0;
    
    while (fscanf(input, "%s", string) == 1)
    {
        if (string[strlen(string)-1] == 'a')
            countA++;
    }
    fclose(input);
    return countA;
}

void outputFromFile(int countA)
{
    FILE *output;
    output = fopen(OUTPUTFILENAME, "w");
    fprintf(output, "%d", countA);
    fclose(output);
}

int main(int argc, char const *argv[])
{
    char string[SIZE];
    outputFromFile(inputFromFile(string));
    return 0;
}

#include "func.h"

#define iNPUTFILE "input.txt"
#define OUTPUTFILE "output.txt"
#define SIZE 1000

int main(int argc, char const *argv[])
{
    char string[SIZE];
    inputFromFile(iNPUTFILE, string);
    swapLetters(string);
    outputFromFile(OUTPUTFILE, string);
    return 0;
}

#include "func.h"

#define iNPUTFILE "input.txt"
#define OUTPUTFILE "output.txt"
#define SIZE 1000

int main(int argc, char const *argv[])
{
    char string[SIZE];
    char res[SIZE];
    inputFromFile(iNPUTFILE, string);
    delSpace(string, res);
    outputFromFile(OUTPUTFILE, res);
    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "temp_functions.h"

int main(int argc, char *argv[])
{   
    // time_t t0 = time(0);
    if (argc == 1)
    {
        printf("input example: prog.exe -h");
        return 0;
    }
    else
    {
        int parameter = 0;
        int countDate = 0;
        struct sensor *info = malloc(SIZE * sizeof(struct sensor));
        while ((parameter = getopt(argc, argv, "f:m::ph")) != -1)
        {
            switch (parameter)
            {
            case 'f':
                char *fileName;
                fileName = optarg;
                countDate = AddInfo(info, fileName);
                break;
            case 'm':
                int numberMonth = atoi(optarg);
                if (numberMonth >= 0 && numberMonth <=12)             
                    statistics(numberMonth, countDate, info);
                else
                    printf("incorrectly entered month\n");
                break;
            case 'p':
                printData(info, countDate);
                break;
            case 'h':
                menu();
                break;
            case '?':
                menu();
                break;
            };
        };
    }
    // time_t t1 = time(0);
    // double time_in_seconds = difftime(t1, t0);
    // printf("TIME = %.2f", time_in_seconds);
    return 0;
}

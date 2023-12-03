#include <stdio.h>
#include <math.h>


int main(void){
    // Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
    // Данные на входе: Целое неотрицательное число
    // Данные на выходе: Целое неотрицательное число наоборот

    unsigned int number; 
    unsigned int resultNumber;
    // unsigned int numberCheck = number; 
    printf("Input number = ");
    scanf("%d", &number);
    
    int count = 1;
    while (number != 0)
    {
        if ((number / ((int)pow(10, count))) == 0 ){
            count--;
            break;
        }
        count++;
    }
    while (number != 0)
    {
        resultNumber += (number % 10) * (int)pow(10, count);
        count--;
        number /= 10;  
    }
    
    printf("resultNumber = %d", resultNumber);

    return 1;
}
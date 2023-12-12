#include <stdio.h>

// Составить функцию, которая определяет наибольший общий делитель двух
// натуральных и привести пример ее использования

int HCD(int number1, int number2){
    while(number1 != 0 && number2 != 0){
        (number1 > number2) ? (number1 %= number2): (number2 %= number1);
    }
    return number1 + number2;
}

int main(void){
    int number1, number2;
    printf("Input numbers = ");
    scanf("%d%d", &number1, &number2);
    printf("HCD = %d", HCD(number1, number2));
    return 1;
}
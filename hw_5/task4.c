#include <stdio.h>
// Составить функцию, которая определяет сумму всех чисел от 1 до N и
// привести пример ее использования.

int sum_arithmetic_progression(int number){
    return ((1+number)*number/2);
}

int main(void){
    int number;
    printf("Input number = ");
    scanf("%d", &number);
    printf("sum_arithmetic_progression = %d", sum_arithmetic_progression(number));
    return 1;
}
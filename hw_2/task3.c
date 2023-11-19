#include <stdio.h>

int main(void){
    // Ввести два числа и найти их разность
    // Нужно напечатать разность двух чисел
    // Данные на входе: Два целых числа через пробел
    // Данные на выходе: Одно целое число

    int num1, num2;
    printf("Input number: ");
    scanf("%d%d", &num1, &num2);
    printf("number difference %d", num1 - num2);
    return 1;
}
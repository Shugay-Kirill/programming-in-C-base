#include <stdio.h>

int main(void){

    // Ввести пять чисел и вывести наибольшее из них
    // Нужно напечатать наибольшее число
    // Данные на входе: Пять целых чисел разделенных пробелом
    // Данные на выходе: Одно целое число

    printf("Input 5 number:\n");
    int num1, num2, num3, num4, num5;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int max1 = num1 > num2 ? num1 : num2;
    int max2 = num3 > num4 ? num3 : num4;
    int max = max1 > max2 ? max1 : max2;
    max = max > num5 ? max : num5;

    printf("max number = %d", max);
    return 1;
}
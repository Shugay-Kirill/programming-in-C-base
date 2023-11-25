#include <stdio.h>

int main(void){
    // Ввести пять чисел и вывести наименьшее из них
    // Нужно напечатать наименьшее число
    // Данные на входе: Пять целых чисел разделенных пробелом
    // Данные на выходе: Одно целое число

    printf("Input 5 number:\n");
    int num1, num2, num3, num4, num5;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int min1 = num1 < num2 ? num1 : num2;
    int min2 = num3 < num4 ? num3 : num4;
    int min = min1 < min2 ? min1 : min2;
    min = min < num5 ? min : num5;

    printf("min number = %d", min);
    return 1;
}
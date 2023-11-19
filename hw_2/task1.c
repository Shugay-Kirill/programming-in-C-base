#include <stdio.h>

int main(void)
{
    // Ввести три числа, найти их сумму
    // Нужно напечатать сумму трех чисел
    // Данные на входе: Три целых числа через пробел
    // Данные на выходе: Строка вида %d+%d+%d=%d

    int num1, num2, num3;
    printf("input 3 number: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Summ number = %d", num1 + num2 + num3);
    return 0;
}
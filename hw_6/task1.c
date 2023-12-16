// Дано натуральное число N. Выведите все его цифры по одной, в прямом
// порядке, разделяя их пробелами или новыми строками. Необходимо
// реализовать рекурсивную функцию.
// void print_num(int num)
// Данные на входе: Одно целое неотрицательное число
// Данные на выходе: Все цифры числа через пробел в прямом порядке.

#include <stdio.h>
void print_num(int num)
{
    if (num >= 10)
    {
        print_num(num / 10);
    }
    printf("%d ", num % 10);
}

int main(void)
{
    int number;
    printf("Input number = ");
    scanf("%d", &number);
    print_num(number);
    return 0;
}

// Дано натуральное число N. Посчитать количество «1» в двоичной записи
// числа.
// Данные на входе: Натуральное число
// Данные на выходе: Целое число - количество единиц в двоичной записи
// числа.

#include <stdio.h>

int count_one(int number, int count)
{
    if (number >= 2)
    {
        if (number % 2 != 0)
            count++;
        return count_one(number / 2, count);
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int number, count = 1;
    printf("Input number = ");
    scanf("%d", &number);
    printf("count one = %d", count_one(number, count));
    return 0;
}

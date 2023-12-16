// Составить рекурсивную функцию. Выведите все числа от A до B
// включительно, в порядке возрастания, если A < B, или в порядке убывания в
// противном случае.
// Данные на входе: Два целых числа через пробел.
// Данные на выходе: Последовательность целых чисел.

#include <stdio.h>

int rec_number(int number1, int number2)
{
    if (number1 == number2)
    {
        return;
    }
    printf("%d ", number1);
    return rec_number(number1 + 1, number2);
}

int main(void)
{
    int number1, number2;
    printf("Input numbers = ");
    scanf("%d%d", &number1, &number2);
    rec_number(number1, number2);
    return 0;
}

// Задача 2. Найти минимум
// Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
// Данные на входе: 5 целых чисел через пробел
// Данные на выходе: Одно единственное целое число
// Пример №1
// Данные на входе: 4 15 3 10 14
// Данные на выходе: 3
// Пример №2
// Данные на входе: 1 2 3 4 -5
// Данные на выходе: -5
#include <stdio.h>
int min(){
    int array[5];
    int min = 2147483647;
    printf("Input 5 number = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    printf("min number = %d", min());
    return 0;
}
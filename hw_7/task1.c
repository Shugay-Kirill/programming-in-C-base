// Задача 1. Среднее арифметическое чисел
// Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
// всех элементов массива.
// Данные на входе: 5 целых ненулевых чисел через пробел
// Данные на выходе: Одно число в формате "%.3f"
// Пример №1
// Данные на входе: 4 15 3 10 14
// Данные на выходе: 9.200
// Пример №2
// Данные на входе: 1 2 3 4 5
// Данные на выходе: 3.000
#include <stdio.h>

float avg(){
    int array[5];
    int summ = 0;
    printf("Input 5 number = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        summ += array[i];
    }
    return summ/5.;
}


int main(int argc, char const *argv[])
{
    printf("avg = %.3f", avg());
    return 0;
}
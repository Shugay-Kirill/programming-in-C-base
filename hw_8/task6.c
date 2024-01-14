// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной
// диагонали. Реализовать функцию среднее арифметическое главной
// диагонали.
// Данные на входе: 5 строк по 5 целых чисел через пробел
// Данные на выходе: Одно целое число
// Пример
// Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
// Данные на выходе: 10

#include <stdio.h>

float inputArray(int size, int array[size][size]){
    int sum = 0;
    printf("Input array: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        scanf("%d", &array[i][j]);
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }
    float avg = 1. * sum / size;
    return avg;
}

void printArray(int size, int array[size][size]){
    printf("\nPrint arrray:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int countElement(int size, int array[size][size], float avg){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i][j] > avg)
            {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int array[5][5];
    int const size = 5;
    printf("count = %d", countElement(size,array, inputArray(size, array)));
    // printArray(size, array);
    return 0;
}


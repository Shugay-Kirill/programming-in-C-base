// Задача 4. Отсортировать по последней цифре
// Считать массив из 10 элементов и отсортировать его по последней цифре.
// Данные на входе: 10 целых чисел через пробел
// Этот же массив отсортированный по последней цифре
// Пример №1
// Данные на входе: 14 25 13 30 76 58 32 11 41 97
// Данные на выходе: 30 11 41 32 13 14 25 76 97 58
// Пример №2
// Данные на входе: 109 118 100 51 62 73 1007 16 4 555
// Данные на выходе: 100 51 62 73 4 555 16 1007 118 109

#include <stdio.h>
#include <stdlib.h>

enum {SIZE = 10};

int randomumber(int number){
    return rand() % number;
}

void randomNumberArray(int *array){
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = randomumber(100);
    }  
}

void printArray(int *array){
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sort(int *array){
    printf("sort\n");
    int temp = 0;
    int position = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (array[j] % 10 == i)
            {
                temp = array[position];
                array[position] = array[j];
                array[j] = temp;
                position++;        
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[SIZE];
    srand(232);
    randomNumberArray(array);
    // int array [SIZE] = {14, 25, 13, 30, 76, 58, 32, 11, 41, 97};
    printArray(array);
    sort(array);
    printArray(array);
    return 0;
}

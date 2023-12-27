// Задача 6. Чаще других
// Дан массив из 10 элементов. Определить, какое число в массиве встречается
// чаще всего. Гарантируется, что такое число ровно 1.
// Данные на входе: 10 целых числе через пробел
// Данные на выходе: Одно число, которое встречается чаще других.
// Пример
// Данные на входе: 4 1 2 1 11 2 34 11 0 11
// Данные на выходе: 11

#include <stdio.h>

enum {SIZE = 10};

void inputArray(int *array){
    printf("input 10 number = ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
}

void printArray(int *array){
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int searchNumber(int *array){
    int countNumberMax = 0;
    int resultNumber;
    for (int i = 0; i < SIZE; i++){
        int count = 1;
        for (int j = i+1; j < SIZE; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if(countNumberMax < count){
            resultNumber = array[i];
            countNumberMax = count;
        }
    }
    return resultNumber;
}

int main(int argc, char const *argv[])
{
    int array[SIZE];
    inputArray(array);
    printArray(array);
    printf("number = %d", searchNumber(array));
    return 0;
}

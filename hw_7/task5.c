// Задача 5. Вторая с конца ноль
// Считать массив из 10 элементов и отобрать в другой массив все числа, у
// которых вторая с конца цифра (число десятков) – ноль.
// Данные на входе: 10 целых чисел через пробел.
// Данные на выходе: Целые числа через пробел, у которых вторая с конца
// цифра - ноль
// Пример
// Данные на входе: 40 105 203 1 14 1000 22 33 44 55
// Данные на выходе: 105 203 1 1000

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

int sizeNewArray(int *array){
    int sizeArray = 0;
    for (int i = 0; i < SIZE; i++)
    {
         if ((array[i] % 100) / 10 == 0)
        {
            sizeArray++;
        }
    }
    return sizeArray;
}

void zero_tens(int *array, int *newArray){
    
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if ((array[i] % 100) / 10 == 0)
        {
            newArray[count] = array[i];
            // printf("newarray = %d \n", newArray[count]);
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        printf("%d ", newArray[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // int array[SIZE];
    // inputArray(array);
    int array[10] = {40, 105, 203, 1, 14, 1000, 22, 33, 44, 55};
    printArray(array);
    // printf("sizenew = %d\n", sizeNewArray(array));
    int newArray[sizeNewArray(array)];
    zero_tens(array, newArray);
    // printArray(newArray); // не смог разораться, почему выводит массив из 10 элементов
    return 0;
}

// Задача 3. Циклический сдвиг массива вправо на 4
// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
// элемента.
// Данные на входе: 12 целых чисел через пробел
// Данные на выходе: 12 целых чисел через пробел
// Пример №1
// Данные на входе:  4 -5  3  10 -4 -6  8 -10  1  0  5  7
// Данные на выходе: 1  0  5  7   4 -5  3  10 -4 -6  8 -10
//                               -4
// Данные на входе:  1 -5  3  10  4 -6  8 -10 -4  0  5  7
// Данные на выходе: 1  0  5  7   4 -5  3  10 -4 -6  8 -10

// Пример №2
// Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
// Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8

#include <stdio.h>

void inputArray(int *array){
    printf("Input 12 number = ");
    for(int i = 0; i < 12; i++){
        scanf("%d", &array[i]);
    }    
    
}
void stepArray(int *array){
    for(int i = 0; i < 4; i++){
        int temp = array[4 + i];
        array[4 + i] = array[i];
        array[i] = array[8 + i];
        array[8 + i] = temp;
    }
}

void printArray(int *array){
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int array[12];
    inputArray(array);
    printArray(array);
    stepArray(array);
    printArray(array);

    return 0;
}
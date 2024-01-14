// Составить функцию, которая меняет в массиве минимальный и максимальный
// элемент местами. Прототип функции
// void change_max_min(int size, int a[])
// Данные на входе: Функция принимает на вход размер массива и
// массив чисел типа int
// Данные на выходе: Функция не возвращает значения, измененный
// массив сохраняется на месте исходного.
// Пример
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 10 2 3 4 5 6 7 8 9 1

#include<stdio.h>

void change_max_min(int size, int a[]){
    int max = -2147483647;
    int min = 2147483647;
    int maxIndex = 0, minIndex = 0;
    for (int i = 0; i < size; i++)
    {        
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;

        }
        else if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;
}

int main(int argc, char const *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    change_max_min(10,a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

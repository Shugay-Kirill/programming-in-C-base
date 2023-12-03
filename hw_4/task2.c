#include <stdio.h>

int main(void){
    // Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
    // Данные на входе: Целое положительное число
    // Данные на выходе: Одно слово: YES или NO

    unsigned int number;
    printf("Input number = ");
    scanf("%d", &number);

    printf("\nsolution option 1\n"); // Один из вариантов решения. Если исходить из условия задачи
    (number > 99) && (number < 1000) ? printf("YES") : printf("NO"); 

    printf("\nsolution option 2\n"); // Второй варинат решения. Закрепелния цикла.
    unsigned int count = 0;
    while(number != 0){
        number /= 10;
        count++;
    }
    count == 3 ? printf("YES") : printf("NO");
    return 1;
}

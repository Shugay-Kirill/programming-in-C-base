#include <stdio.h>

int main(void){
    // Ввести целое число и определить, верно ли, что все его цифры четные
    // Данные на входе: Одно целое число
    // Данные на выходе: YES или NO

    int number;
    printf("Input number = ");
    scanf("%d", &number);
    if (number < 0)
        number *= -1;
    while (number != 0)
    {
        if(((number % 10) % 2) == 1){
            printf("No");
            break;
        }
        number /= 10;
    }
    
    if (number == 0) 
        printf("Yes");
    return 1;
}
#include <stdio.h>

int main(void){
    // Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
    // Данные на входе: Три целых числа
    // Данные на выходе: Одно слово YES или NO

    int num1, num2, num3;

    printf("Input 3 number = \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if(num1 < num2){
        if(num2 < num3){
            printf("Yes");
        }
        else
            printf("No");
    }
    else
        printf("No");
    
    return 1;
}
#include <stdio.h>

// Составить логическую функцию, которая определяет, верно ли, что в заданном
// числе сумма цифр равна произведению.
// int is_happy_number(int n)

_Bool is_happy_number(int number){
    int summ = 0;
    int mult = 1;
    while (number > 0)
    {
        summ += number % 10;
        mult *= number % 10;
        number /= 10;
    }
    
    if (summ == mult)
        return 1;
    else 
        return 0;
  
}

int main(void){
    int number;
    printf("Input numbers = ");
    scanf("%d", &number);
    is_happy_number(number) ? printf("Yes"): printf("No");
    return 1;
}
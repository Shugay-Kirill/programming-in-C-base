#include <stdio.h>

int main(void){
// Ввести натуральное число и напечатать все числа от 10 до введенного числа -
// у которых сумма цифр равна произведению цифр
// Данные на входе: Одно натуральное число большее 10
// Данные на выходе: Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. Не превосходящие введенное число.

    printf("Input number = ");
    unsigned int number;
    scanf("%d", &number);

    for(int i = 10; i <= number; i++){
        
        unsigned int product = 1;
        unsigned int summ = 0;
        unsigned int numberCheck = i;
        while(numberCheck > 0){
            summ += numberCheck % 10;
            product *= numberCheck % 10;
            numberCheck /= 10;
        }
        if (summ == product)
            printf("number = %d\n", i);
    }

    return 1;
}
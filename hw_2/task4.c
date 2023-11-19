#include <stdio.h>

int main(void){
    // На вход подается произвольное четырехзначное число
    // Нужно напечатать среднее арифметическое цифр
    // Данные на входе: Четырехзначное целое положительное число
    // Данные на выходе: Вещественное число в формате %.2f    

    // 1234         
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    if(999 < number && number < 10000){
        printf("Avg = %.2f", ((number / 1000) + ((number / 100) % 10) + (number % 100) / 10 + (number % 10)) / 4.f);      
    }
    else
        printf("not a four digit number");
    return 1;
}
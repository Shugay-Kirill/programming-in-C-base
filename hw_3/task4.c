#include <stdio.h>

int main(void){
    // Ввести номер месяца и вывести название времени года.
    // Данные на входе: Целое число от 1 до 12 - номер месяца.
    // Данные на выходе: Время года на английском: winter, spring, summer, autumn

    int number_month;
    printf("Input number month = ");
    scanf("%d", &number_month);
    if(number_month >= 1 && number_month <= 12){
        if(number_month <= 2 || number_month == 12)
            printf("winter");
        else if(number_month <= 5)
            printf("spring");
        else if(number_month <= 8)
            printf("summer");
        else
            printf("autumn");
    }
    else
        printf("invalid input");
    return 1;
}
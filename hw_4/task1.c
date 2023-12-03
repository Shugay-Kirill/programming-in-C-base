#include <stdio.h>

int main(void){
    // Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
    // Данные на входе: Два целых числа по модулю не больше 100
    // Данные на выходе: Сумма квадратов от первого введенного числа до
    // второго

    int a, b;
    printf("Input a and b = ");
    scanf("%d%d", &a, &b);
    unsigned int result;
    for(a; a <= b; a++){
        result += a * a;
    }
    printf("sum of squares = %d", result);
    return 1;
}
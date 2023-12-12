#include <stdio.h>
#include <math.h>

// Необходимо составить функцию, которая определяет, сколько зерен попросил
// положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
// зерна, на 3-ю – 4 зерна, …)


// int number_of_grains(int n)
// {
//     int result = 1;
//     for (int i = 1; i < n; i++)
//     {
//         result *= 2;
//     }
//     return result;
// }

int number_of_grains(int n)
{
    return (int)pow(2, n-1);
}
int main(void)
{
    int n;
    printf("Input number = ");
    scanf("%d", &n);
    printf("number_of_grains = %d", number_of_grains(n));
    return 1;
}
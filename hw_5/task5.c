#include <stdio.h>

// Проверить строку состоящую из скобок "(" и ")" на корректность.
// Данные на входе: На вход подается строка состоящая из символов '(', ')'
// и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
// Данные на выходе: Необходимо напечатать слово YES если скобки
// расставлены верно и NO в противном случае
// Пример №1
// Данные на входе: (()()).
// Данные на выходе: YES
// Пример №2
// Данные на входе: ()(.
// Данные на выходе: NO

// если правильно понял условие, скобки будут корректные, если на каждую открытую будет закрытая. А расположение скобок на это не влияет. (()) или ()()

int check_brackets(char input_line){
    
    if (input_line == '(')
        return 1;
    if (input_line == ')')
        return 0;
}

int main(void){
    char input_line;
    unsigned int rightParenthesis = 0;
    unsigned int leftParenthesis = 0;
    printf("Input line = ");

    while(1){
        scanf("%c", &input_line);
        if (input_line == '.')
            break;
        if (check_brackets(input_line) == 1)
            leftParenthesis++;
        else
            rightParenthesis++;
    }

    leftParenthesis == rightParenthesis ? printf("YES"): printf("NO");
    return 1;
}
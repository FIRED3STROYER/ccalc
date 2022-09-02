#include <stdio.h>

int main() {
    
    char Operator;
    float num1, num2, result = 0;
    printf("Please pick a operator (eg. +, -. *, /)\n");
    scanf("%c", &Operator);
    printf("Please pick 2 numbers\n");
    scanf("%f%f", &num1, &num2);

    switch(Operator) {
        case '+': result = num1 + num2;
            break;
        case '-': result = num1 - num2;
            break;
        case '*': result = num1 * num2;
            break;
        case '/': result = num1 / num2;
            break;
        default: printf("\n Invalid operator");
    }
    printf("%f",result);

    return 0;
}
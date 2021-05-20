#include <stdio.h>
int main() {
    char operator;
    double i, j;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    printf("\na: ");
    scanf("%lf",&i);
    printf("b: ");
    scanf("%lf",&j);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", i, j, i + j);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", i, j, i - j);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", i, j, i * j);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", i, j, i / j);
        break;
        
    default:
        printf("Error! operator is not correct");
    
    }

    return 0;
}

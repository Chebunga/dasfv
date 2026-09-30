#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char operator ;
    double num1;
    double num2;
    double result;
    //the two %% prevent formatting

    printf("\n Enter an operator (+ - * / %%)");
    scanf("%c",&operator );

    printf("Enter the first number:");
    scanf("%lf", &num1);

    printf("Enter the second number:");
    scanf("%lf", &num2);

    switch (operator){
    case '+':
        result = num1 + num2;
        printf("\n result: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n result: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n result: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n result: %lf", result);
        break;
    case '%':
        result = fmod(num1, num2);
        printf("\n result: %lf", result);
        break;
  default:
    printf("%c is not a valid operator",operator);
    }


        return 0;
}

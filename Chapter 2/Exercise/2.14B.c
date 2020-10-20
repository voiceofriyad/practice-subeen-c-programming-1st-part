#include<stdio.h>
int main()
{
    double num1, num2;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("please enter another number: ");
    scanf("%lf", &num2);

    double sum = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, sum);

    double sub = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, sub);

    double mul = num1 * num2;
    printf("%lf * %lf = %lf\n", num1, num2, mul);

    double div = num1 / num2;
    printf("%lf / %lf = %lf\n", num1, num2, div);

    return 0;
}


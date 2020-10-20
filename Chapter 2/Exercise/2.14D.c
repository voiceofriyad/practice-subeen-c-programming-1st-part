#include<stdio.h>
int main()
{
    int num1, num2;
    char sign;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);


    int sum = num1 + num2;
    sign = '+';
    printf("%d  %c  %d = %d\n", num1, sign, num2, sum);

    int sub = num1 - num2;
    sign = '-';
    printf("%d  %c  %d = %d\n", num1, sign, num2, sub);

    int mul = num1 * num2;
    sign = '*';
    printf("%d  %c  %d = %d\n", num1, sign, num2, mul);

    int div = num1 / num2;
    sign = '/';
    printf("%d  %c  %d = %d\n", num1, sign, num2, div);

    return 0;
}



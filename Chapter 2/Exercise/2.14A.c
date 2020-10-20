#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    int sub = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, sub);

    int mul = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, mul);

    int div = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, div);

    return 0;
}

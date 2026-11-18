#include <stdio.h>
int main(void)
{
    float a, b;
    printf("Enter two numbers;");
    scanf("%f %f", &a, &b);
    printf("Addition =%.2f\n", a+b);
    printf("subtraction =%.2f\n",a-b);
    printf("multiplaction =%.2f\n",a*b);
    if (b!=0)
    printf("Division =%.2f\n",a/b);
    else
    printf("Division is not possible because the second number is zero.\n");
    return 0;
}
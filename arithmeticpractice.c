#include<stdio.h>

int main()
{
    int var1 = 8, var2 = 3;

    printf("Enter the first number");
    scanf("%d", &var1);

    printf("Enter the second number");
    scanf("%d", &var2);

    printf("The sum =%d diff =%d div =%f mult =%d rem =%d", var1+var2, var1-var2, (float)var1/var2,var1*var2,var1%var2);

    return 0;
}
#include<stdio.h>

int main()
{
    int minutes;

    printf("Enter the number of minutes: 150");
    scanf("%d", &minutes);

    printf("The number of hours = %d The number of mins = %d", minutes/60, minutes%60);
    
    return 0;
}
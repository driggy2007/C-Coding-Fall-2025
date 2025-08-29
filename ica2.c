#include<stdio.h>
#include<stdbool.h>

int main()
{
    char First_letter = 'D';
    int age = 18;
    float height_feet = 6.085;
    bool is_student = "true";

    printf("First-letter: %c\n", First_letter);
    scanf("%c", &First_letter);
    printf("Age: %d\n", age);
    scanf("%d", &age);
    printf("Height_feet: %.2f\n", height_feet);
    scanf("%f", &height_feet);
    printf("Is_student: %d\n", is_student);
    scanf("%d", &is_student);

    return 0;
}
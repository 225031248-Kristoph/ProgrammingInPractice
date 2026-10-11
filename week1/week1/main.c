#include <stdio.h>
char name[100];
int age;
float price;

int main() 
{
    printf("please enter your name:");
    scanf("%s", name);

    printf("please enter your age:");
    scanf("%d", &age);

    printf("please enter the price:");
    scanf("%f", &price);

    printf("your name is %s, your age is %d, and the price is %.2f\n", name, age, price);

    return 0;
}
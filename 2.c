// Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo) 

#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    int choice;

    printf("1-->addition\n2-->subtraction\n3-->multiplication\n4-->division\n5-->modulo");
    printf("\n----------------------------------------------");
    printf("\nEnter Your Choice  ");
    scanf("%d",&choice);
    printf("Enter first Numbers ");
    scanf("%d",&a);
    printf("Enter secound Numbers ");
    scanf("%d",&b);

    switch (choice)
    {
        case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
        case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
        case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
        case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
        case 5:
        printf("%d  %d = %d",a,b,a%b);
        break;
    }
}

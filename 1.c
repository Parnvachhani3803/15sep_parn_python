/*Display This Information using printf
1. Your Name
2. Your Birth date
3. Your Age
4. Your Address*/

#include<stdio.h>
void main()
{
    char name[20],add[20];
    int date,month,year;
    int age;
    printf("Enter Your Name\n");
    scanf("%s",&name);
    printf("Enter Your Bday date\n");
    scanf("%d",&date);
    printf("Enter Your Bday Month\n");
    scanf("%d",&month);
    printf("Enter Your Bday Year\n");
    scanf("%d",&year);
    printf("Enter Your Age\n");
    scanf("%d",&age);
    printf("Enter Your Address\n");
    scanf("%s",&add);

    printf("\nMy Name is %s",name);
    printf("\nMy Birth date is %d/%d/%d",date,month,year);
    printf("\nMy Age is %d",age);
    printf("\nMy Address is %s",add);
}
#include<stdio.h>
void main()
{
    int choise;
    printf("1.pizza,\n2.dhosa,\n3.megi\n4.sendwitch");
    printf("enter your choise");
    scanf("%d",&choise);
    // printf("enter choise is %d",choise);

    switch (choise)
    {
    case 1:
        printf("pizza");
        break;

    case 2:
        printf("dhosa");
        break;

    case 3:
        printf("megi");
        break;

    case 4:
        printf("sendwitch");
        break;
    
    default:
            printf("plz enter a value");
        break;
    }
}
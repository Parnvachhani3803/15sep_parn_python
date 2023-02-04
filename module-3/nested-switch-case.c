#include<stdio.h>
void main()
{
    int a;
    int choice;

    printf("1-->Pizza\n2-->Burger\n3-->Sandwich\n4-->Dosa");
    printf("\n----------------------------------------------");
    printf("\nEnter Your Choice  ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\nPizza");

        printf("\n\nyou can buy a maximum of 4 pizzas ");
        printf("\n\nHow Many Pizza do you buy ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("your order for 1 pizza has been successful");
             break;

            case 2:
            printf("your order for 2 pizza has been successful");
             break;

            case 3:
            printf("your order for 3 pizza has been successful");
             break;

            case 4:
            printf("your order for 4 pizza has been successful");
             break;
        }
        break;

    case 2:
        printf("\nBurger");


        printf("\nyou can buy a maximum of 4 Burger");
        printf("\nHow Many Pizza do you buy");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("your order for 1 Burger has been successful");
             break;

            case 2:
            printf("your order for 2 Burger has been successful");
             break;

            case 3:
            printf("your order for 3 Burger has been successful");
             break;

            case 4:
            printf("your order for 4 Burger has been successful");
             break;
        }
        break;

    case 3:
        printf("\nSandwich");

        printf("\nyou can buy a maximum of 4 Sandwich");
        printf("\nHow Many Pizza do you buy");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("your order for 1 Sandwich has been successful");
             break;

            case 2:
            printf("your order for 2 Sandwich has been successful");
             break;

            case 3:
            printf("your order for 3 Sandwich has been successful");
             break;

            case 4:
            printf("your order for 4 Sandwich has been successful");
             break;
        }
        break;

    case 4:
        printf("\nDosa");

        printf("\nyou can buy a maximum of 4 Dosa ");
        printf("\nHow Many Pizza do you buy");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("your order for 1 Dosa has been successful");
             break;

            case 2:
            printf("your order for 2 Dosa has been successful");
             break;

            case 3:
            printf("your order for 3 Dosa has been successful");
             break;

            case 4:
            printf("your order for 4 Dosa has been successful");
             break;
        }
        break;
    
    default:
    printf("Sorry This item in not awalebel");
        break;
    }

}
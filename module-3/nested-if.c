#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the 3 number");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a is max",a);
        }
        else
        {
            printf("c is max",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is max",b);
        }
        else
        {
            printf("c is max",c);
        }

    }
}
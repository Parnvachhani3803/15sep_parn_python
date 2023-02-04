#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 2 value:");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("a is max%d",a);
    }
    else if(a==b)
    {
        printf("both are same");
    }
    else
    {
        printf("b is max%d",b);
    }

}
#include<stdio.h>
int main()
{ 
    int a[] = {1,2,0};
    int b[] = {4,0,6};
    int c[] = {0,8,1};
    int i;

    for(i=0; i<3; i++)
    {
        printf("%d   ",a[i]);
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("%d   ",b[i]);
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("%d   ",c[i]);
    }
    return 0;   
}

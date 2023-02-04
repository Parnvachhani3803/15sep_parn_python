// * * * * * 
//   * * * 
//    * *
//     * 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    int no=5;

    for(i=no; i>0; i--)
    {
        for(k=no; k>i; k--)
        {
            printf(" ");
        }
        for(j=i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
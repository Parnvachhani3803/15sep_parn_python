//       *
//     * * *
//    * * * *
//  * * * * * *

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    int no=5;

    for(i=0; i<no; i++)
    {
        for(k=no; k>i; k--)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
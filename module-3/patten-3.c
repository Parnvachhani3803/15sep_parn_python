// * * * * 
//   * * *
//     * *
//       *

#include<stdio.h>
void main()
{
    int i,j,k,no=5;

    for(i=no; i>0; i--)
    {
        for(j=no; j>i; j--)
        {
            printf("  ");
        }
        for(k=0; k<i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
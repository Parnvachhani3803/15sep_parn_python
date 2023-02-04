#include<stdio.h>
void main()
{
    int n = 10;
    int x = n;
    int i,j;

    for(i=1; i <= n; i++)
    {
        for(j=1; j < 2* n; j++)
        { 
                if (j == x || j == n + i - 1) 
                { 
                     printf("*");
                }
                else if (j >= x && j <= n + i - 1 && i == n /2+1) 
                {
                    printf("*");
                }
                else
                {
                    printf(" "); // whitespace
                }

        }
        printf("\n");
        x--;

    }
}
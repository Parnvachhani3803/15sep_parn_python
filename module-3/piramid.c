// #include<stdio.h>
// void main()
// {
//     int i,j,k,no=5;

//     for(i=0; i<5; i++)
//     {

//         for(k=0; k<i; k++)
//         {
//             printf(" ");
//         }
//         for(j=0; j<i; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }
// }

// #include <stdio.h>  
// #include <conio.h>  
// void main()  
// {  
      
//     int i, j, rows, k , no=1;  
//     printf (" Enter a number to define the rows: \n");  
//     scanf ("%d", &rows);   
      
//     for ( i =0; i <= rows; i++)  
//     {  
//         for ( j = 0; j <= i; j++)  
//         {  
//             printf ("  ");   
//         }   
//         for ( k =0; k <= no; k++)  
//         {  
//             printf ("* ");
//         }  
//         printf ("\n");  
//     }  
// }  
















#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    int no=9;

    for(i=0; i<no; i++)
    {
        for(k=no; k>i; k--)
        {
            printf("*");
        }
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        printf("\n");
        
    }
    
    for(i=no; i>0; i--)
    {
         for(k=no; k>i; k--)
        {
            printf("*");      
        }
         for(j=i; j>0; j--)
        {
            printf(" ");
        }
         printf("\n");
    }
}
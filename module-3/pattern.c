// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     int no=5;
//     for(i=5; i>0; i--)
//     {
//         for(k=no; k>i; k--)
//         {
//             printf(" ");                   
//         }                                   
//         for(j=i; j>0; j--)                
//         {                                     
//             printf("* ");
//         }
    
//         printf("\n");

//     }
// }

#include<stdio.h>
void main()
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
    
        printf("\n");

    }
}

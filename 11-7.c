#include <stdio.h>  
void main()  
{  
    int num, i = 1; 
    printf (" Enter a number to get the table:  ");  
    scanf (" %d", &num);  
      
    printf ("\nTable of %d is\n", num);  

    while (i <= 10)  
    {
        printf (" %d x %d = %d \n", num, i, (num * i));  
        i++;   
    }    
}
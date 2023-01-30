// How many even numbers are there
// #include <stdio.h>
// void main() 
// {
// 	int i,a;
// 	printf("Enter The 10 Number :\n");
//     scanf("%d",&a);
// 	for (i = 1; i <= a; i++) 
// 	{
// 		if(i%2 == 0) 
// 		{
// 		  printf("%d ", i);
// 		}
// 	}
// }

// How many odd numbers are there
// #include <stdio.h>
// void main() 
// {
// 	int i,a;
// 	printf("Enter The 10 Number :\n");
//     scanf("%d",&a);
// 	for (i = 1; i <= a; i++) 
// 	{
// 		if(i%2 != 0) 
// 		{
// 		  printf("%d ", i);
// 		}
// 	}
// }

// #include <stdio.h>  
// int main()  
// {  
//     int i, n, sum=0;  
//     printf("Enter any number: ");  
//     scanf("%d", &n);  
//     for(i=2; i<=n; i+=2)  
//     {  
//         sum += i;  
//     }  
//     printf("Sum of all even numbers from 1 to %d: %d", n, sum);  
//     return 0;  
// } 

#include <stdio.h>
void main()
{
    int i, n, sum=0;
    printf("Enter the 10 number: ");
    scanf("%d", &n);
    if(n % 2 != 0)
    {
        n++;
    }
    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of odd numbers is %d = %d", n, sum);
}
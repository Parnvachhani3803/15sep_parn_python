#include <stdio.h>
void main()
{
  int i,factorial=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
    factorial=factorial*i;
  printf("The Factorial of %d is: %d\n",num,factorial);
}

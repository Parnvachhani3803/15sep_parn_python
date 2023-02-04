#include<stdio.h>
void main()
{
    int a=0;
    int *ptr;
    ptr=&a;

    printf("add of othe varabkleis :%d",ptr);
    
    printf("\nadd of othe varabkleis :%d",*ptr);
    *ptr=13;
    ++*ptr;
    printf("\nvalue of a size is:%d",a); 
}
#include 
//#include 

void main() {

int arr[2][2];
int i,j;

//clrscr();

printf("C 2x2 Matrix : ");


//Read the elements of the 2x2 matrix
for(i=0;i<=1;i++) {
    
    for(j=0;j<=1;j++) {
        
        printf("\nEnter element at location %d,%d : ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }

}

 printf("\n\n Entered 2x2 matrix : \n\n");

//Display the elements of 2x2 matrix
for(i=0;i<=1;i++) {
    
    for(j=0;j<=1;j++) {
        
        printf("%d  ",arr[i][j]);
      
    }
 printf("\n");
}


//getch();  
 
  
}6

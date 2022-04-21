// C Program to Insert an element in an 2D Array 
 
#include<stdio.h> 
 
int main() 
{ 
 int arr[30][30];
 int row, col;
 int element,i,j,row_location, col_location; 

 printf("\nEnter no of rows :"); 
 scanf("%d",&row);
 printf("\nEnter no of columns :"); 
 scanf("%d",&col); 
 
 for(i=0;i<row;i++) {    //traversing 2D array 
 for(j=0;j<col;j++) {    
   printf("Enter arr[%d] [%d]:",i,j);
   scanf("%d",&arr[i][j]);   
//   printf("\n"); 
 }//end of j    
}//end of i    
 
 printf("\nEnter the element to be inserted :"); 
 scanf("%d",&element); 
 printf("\n Enter the row location"); 
 scanf("%d",&row_location); 

 printf("\n Enter the column location"); 
 scanf("%d",&col_location); 
 
 /* create space at the specified col_location */ 
 for(i = col ;i >= col_location ; i--)
       arr[row_location][i] = arr[row_location][i-1]; 
 
 col++; 
 arr[row_location][col_location-1] = element; 
 
 /* Print out the Result of Insertion */ 
 for(i=0;i<row;i++) {    //traversing 2D array 
 for(j=0;j<col;j++) {    
printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
 }//end of j    
}//end
 
}

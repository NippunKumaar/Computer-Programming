/* Program to read 2d array elements */

#include<stdio.h>  

int main()
{      
int i=0,j=0;    
int arr[2][3];
for(i=0;i<2;i++) {    //traversing 2D array 
 for(j=0;j<3;j++) {    
   printf("Enter arr[%d] [%d]:",i,j);
   scanf("%d",&arr[i][j]);   
//   printf("\n"); 
 }//end of j    
}//end of i    

for(i=0;i<2;i++) {    //traversing 2D array 
 for(j=0;j<3;j++) {    
printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
 }//end of j    
}//end of i   
} 
#include<stdio.h> 

float findAverage(int marks[]); 
void printarray(int marks[]); 

int main() 
{ 
    float avg; 
    int marks[5] = {99, 90, 96, 93, 95}; 
printarray(marks); 
printf("program done\n"); 
} 
 
void printarray(int marks[]) 
{ 
int i; 
float avg; 
for (i = 0; i <= 4; i++){
    printf("%d\t",marks[i]);     
}
printf("\n");
avg=findAverage(marks); 
printf("Average marks = %.1f\n", avg); 
printf("average done\n"); 
 
} 
 
float findAverage(int marks[]) 
{ 
    int i; 
float sum = 0; 
    float avg; 
    for (i = 0; i <= 4; i++) { 
        sum += marks[i]; 
    }  
    avg = (sum / 5); 
   return avg; 
} 
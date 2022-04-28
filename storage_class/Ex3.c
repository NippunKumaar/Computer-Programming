//Program to demostrate the usage of static storage class

#include <stdio.h> 
/* function declaration */ 
void next(); 
/* global variable */ 
static int counter = 7; 
int main() 
{ 
 while(counter<10) { 
      next(); 
      counter++;   
   } 
}

void next( ) 
{    /* function definition */ 
   static int iteration = 13; /* local static variable */ 
   iteration ++; 
   printf("iteration=%d and counter= %d\n", iteration, counter);
} 
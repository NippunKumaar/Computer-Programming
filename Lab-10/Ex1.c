//C program to read string using “%[^\n]" to get space between strings

#include <stdio.h>

int main()
{
char name[30]; 
printf("Engter the string as your name: "); 
scanf("%[^\n]", name); //This formatting will take input string untill newline(\n) is pressed. This is an alternate for gets() function
puts(name); 
 
}
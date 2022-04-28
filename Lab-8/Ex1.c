
//C program to find the Area and Perimeter of a square. Write functions to find area and perimeter. 
//The function should take side length as a parameter.
#include <stdio.h>

void square(int);
int main()
{
	int side;
	printf("Enter the side of the square\n");
	scanf("%d", &side);
	square(side);
}

void square(int side)
{
	printf("Area of the square is:%d\n",side*side);
	printf("Perimeter of the square is:%d\n",4*side);
}
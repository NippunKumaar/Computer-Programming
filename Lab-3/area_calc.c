/* a C program to find the area of  circle,  Rectangle, Square. (Identify variables required)*/


#include <stdio.h>

int main()
{
	float radius, rec_length, rec_breath, square_side;
	float area;

	printf("Enter the radius of the circle\n");
	scanf("%f", &radius);
	printf("Enter the rectabgle length of the circle\n");
	scanf("%f", &rec_length);
	printf("Enter the rectabgle breath of the circle\n");
	scanf("%f", &rec_breath);
	printf("Enter the square side of the circle\n");
	scanf("%f", &square_side);

	area = 3.14*radius*radius;					//Expression for area of circle
	printf("Area of the circle is: %f\n", area);
	area = rec_breath*rec_length;				//Expression for area of rectangle
	printf("Area of the rectangle is: %f\n", area);
	area = square_side*square_side;				//Expression for area of square
	printf("Area of the square is: %f\n", area);


}
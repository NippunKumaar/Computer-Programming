/*Create a structure FRACTION with two data fields : numerator and denominator (int) Read 
two fractions using variables of structure FRACTION and print them in the numerator  /  denominator format.*/


#include <stdio.h>

struct fraction
{
	float numerator;
	float denominator;
};

int main() 
{
	struct fraction input;
	printf("Enter the numerator:");
	scanf("%f", &input.numerator);
	printf("Enter the denominator:");
	scanf("%f", &input.denominator);

	printf("The eneter fractinal number is %f/%f/n", input.numerator,input.denominator);
}
/* A C program Program to print addition, subtraction, Multiplication, quotient, and 
remainder of two numbers by identifying the required inputs and outputs.*/

#include <stdio.h>

int main()
{
	float input1, input2;
	float result;

	printf("Enter the value input1:\n");
	scanf("%f",&input1);
	printf("Enter the value input2:\n");
	scanf("%f",&input2);

	printf("Addition result:%f\n", input1+input2);		//expression for addition
	printf("Subtraction result:%f\n", input1-input2);	//expression for subtraction
	printf("Multiplication result:%f`\n", input1*input2);//expression for multiplication
	printf("Division result:%f`\n", input1/input2);		//expression for division
	printf("Reminder result:%d\n", (int)input1%(int)input2);	//expression for modulo operation with explicit type conversion
}
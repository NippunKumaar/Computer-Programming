/*C program to find the maximum of three numbers using function. 
An array of three numbers is passed to the function 
and the maximum number is written back to the function.*/

#include <stdio.h>

int maximum(int []);

int main()
{
	int input[3];
	int max;

	printf("Enter the three numbers\n");
	for (int i=0;i<3;i++) {
		scanf("%d",&input[i]);
	}

	max = maximum(input);
	printf("The maximum number is:%d\n",max);
}

int maximum(int input[3])
{
	int max = input[0];
	for (int i=1;i<3;i++) {
		if(max <input[i])
			max = input[i];
	}
	return max;
}
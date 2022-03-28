// Simple Switch case example

#include<stdio.h>

int main()
{
	int choice;
	printf("Enter a number form 1 to 3\n");
	scanf("%d",&choice);

	switch(choice)
	{
		printf("First Statement\n");
		case 1:
			printf("Inside Switch Case 1\n");
			break;
		case 2:
			printf("Inside Switch Case 2\n");
			break;
		case 3:
			printf("Inside Switch Case 3\n");
			break;
		default:
			printf("Please enter a number from 1 to 3\n");
	}
}
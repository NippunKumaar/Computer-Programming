//Finding frequency of a character in a given string

#include<stdio.h>

int main()
{
	char string[100];
	char key;
	int freq = 0;
	int index;

	//Taking string input from user
	printf("Enter a string\n");
	gets(string);

	//Taking key input from the user
	printf("Enter a character to find the frequency\n");
	scanf("%c", &key);

	//Loop for scanning thorugh the string array and finding the frequency pf the given character
	for(index=0;string[index]!='\0'; index++) {
		if (string[index] == key)
			freq++;
	}
	printf("Frequecy of %c is %d\n",key, freq);

}
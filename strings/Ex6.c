//Replacing a given character with "z" in a given string

#include<stdio.h>

int main()
{
	char string[100];
	char key;
	int index;

	//Taking string input from user
	printf("Enter a string\n");
	gets(string);

	//Taking key input from the user
	printf("Enter a character to replace\n");
	scanf("%c", &key);

	//Loop for scanning thorugh the string array and finding the frequency pf the given character
	for(index=0;string[index]!='\0'; index++) {
		if (string[index] == key)
			string[index] = 'z';
	}
	printf("The final string is:%s\n",string);

}
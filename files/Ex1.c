// Example to read a file
#include <stdio.h>

int main() 
{
   FILE *fp;
   char buff[255];
   char c;

   fp = fopen("test.txt", "r");
   c = fgetc(fp);
   printf("1: %c\n", c );
   fscanf(fp, "%s", buff);
   printf("2 : %s\n", buff );
   fgets(buff, 255, fp);
   printf("3: %s\n", buff );
   fclose(fp);
}
// Example to read a file with curser reset
#include <stdio.h>
#include <stdlib.h>

int main() 
{
   FILE *fp;
   char buff[255];
   char c;

   fp = fopen("test.txt", "r");
   c = fgetc(fp);
   printf("1: %c\n", c );
   fseek(fp, 0, SEEK_SET);
   fscanf(fp, "%s", buff);
   printf("2 : %s\n", buff );
   fseek(fp, 0, SEEK_SET);
   fgets(buff, 255, fp);
   printf("3: %s\n", buff );
   fclose(fp);
}
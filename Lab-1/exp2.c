#include <stdio.h>

int main()
{
	int N=0;
	int M=0;
	int i,j;
	printf("Enter the count N \n");
	scanf("%d", &N);
	printf("Enter the count M \n");
	scanf("%d", &M);
	for (i=0;i<N;i++) {
		for (j=0;j<M;j++) {
			printf("* ");
		}
		printf("\n");
	}
}
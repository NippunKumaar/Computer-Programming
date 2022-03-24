#include <stdio.h>

int main()
{
	float y=98.7654;
	printf("%lf\n",y);
	printf("%9.4f\n",y);
	printf("%9.2f\n",y);
	printf("%-9.2f\n",y);
	printf("%09.2f\n",y);
	printf("%10.6f\n",y);
}
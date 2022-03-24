#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k;
	printf("enter no.of row:");
	scanf("%d",&i);
	printf("/n");
	for(j=0;j<=i;j++)
	{
		printf("\n");
		for(k=1;k<=j;k++)
		{
		printf("*",k);
		}
	}
	return 0;
}

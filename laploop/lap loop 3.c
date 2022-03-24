#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int i=1;
while(i<=5)
{
	printf("\n*");
	int j=1;
    while(j<=(i-1))
    {
    	printf("*");
    	j++;

	}
	i++;
	}
	return 1;
}

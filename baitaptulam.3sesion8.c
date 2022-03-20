#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("enter value x:");
	scanf("%d",&x);
	printf("enter value y:");
	scanf("%d",&y);
	printf("enter value z:");
	scanf("%d",&z);
	if(x>y && x>z)
	printf("greatest value is x\n");
	else if(y>x && y>z)
	printf("greatest value is y\n");
	else
	printf("greatest value is z\n");
	return 0;
	
}

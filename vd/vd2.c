#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,t;
	
	printf("nhap gia tri num1:\n");
	scanf("%d",&num1);
	printf("nhap gia tri num2:\n");
	scanf("%d",&num2);
	for(t=num1;t<num2;t+=20)
	{
		if(t%20==0)
		printf("t=%d\n",t);
		}
	return 0;
}

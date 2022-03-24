#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int result=0;
	while(1==1){
	result++;
	int num;
	printf("nhap mot num:");
	scanf("%d",&num);
	if(num>0&&num<100)
	{
	printf("ket qua la :%d\n",result);
	}
	else{ break;}
	}
	return 0;
}

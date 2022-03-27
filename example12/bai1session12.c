#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[4];
	int i,max,min;
	for(i=0;i<4;i++){
		printf("nhap so :");
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	for(i=0;i<4;i++){
		if(max<num[i]){
		 max=num[i];
		}
		if(min>num[i]){
			min=num[i];
		}
	}
	printf("gia tri lon nhat la:%d\n",max);
	printf("gia tri nho nhat la:%d",min);
	
	return 0;
}

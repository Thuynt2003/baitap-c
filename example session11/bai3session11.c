#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5];
	int i,j,temp;
	
	for(i=0;i<5;i++){
		printf("nhap so :");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<(5/2);i++){
		for(j=5;j>(5/2);j--){
			if(i+j==4) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	printf("so sap xep theo thu tu dao nguoc la:\n");
	for(i=0;i<5;i++){
			printf("%d\n",num[i]);
	}
	return 0;
}

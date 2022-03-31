#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int num);
void main(int argc, char *argv[]) {
	int n,i;
	int tongCacBoiSo = 0;
	
	printf("nhap phan tu cua mang :");
	scanf("%d",&n);
	
	int num[n];
	int boiso[n];
	
	for(i=0;i<n;i++){
		printf("nhap so la :");
		scanf("%d",&num[i]);
		if(check(num[i]) != 0) {
			boiso[tongCacBoiSo] = check(num[i]);
			tongCacBoiSo++;
		}
	}
	
	printf("cac boi so cua 50 la:");
	for(i = 0; i < tongCacBoiSo; i++) {
		printf(" %d", boiso[i]);
	}
}

int check(int num){
	if(num%50==0){
		return num;
	}
	else{
		return 0;
	}
}

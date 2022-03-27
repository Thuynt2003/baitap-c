#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,j;
	printf("nhap so luong phan tu  cua mang: ");
	scanf("%d",&n);
	int num[n];
	int numInvert[n];
	for(i = 0;i < n; i++) {
		printf("nhap phan tu thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < n; i++) {
		printf("phan tu thu %d cua mang la: %d\n", i+1, num[i]);
	}
	
	for(i = n-1; i>= 0; i--) {
		numInvert[(n-1)-i] = num[i];
	}
	
	for(i = 0;i < n; i++) {
		printf("phan tu thu %d cua mang dao nguoc la: %d\n", i+1, numInvert[i]);
	}
	
	return 0;
}

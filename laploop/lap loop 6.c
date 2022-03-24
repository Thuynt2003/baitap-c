#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j,k;
	char i;
	
	for(j=1;j<=10;j++){
	 for(k=1;k<=10;k++){
	  printf("%d*%d=%d\n",j,k,j*k);
	  }
	 printf("ban co muon tiep tuc khong ?\n");
	 printf("tiep tuc nhap Y\n");
	 printf("dung lai nhap N\n");
	 printf("nhap lua chon cua ban :");
	 scanf("%s",&i);
	 if(i == 'N') {
	 	break;
	 }
	 }
	 
	return 0;
}

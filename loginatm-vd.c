#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int ma_pin;
	int tien_rut;
	int dem=0;
	char j[100];
	for(i=0;i<30;i++){
	    printf("nhap ma pin cua ban:");
	    scanf("%d",&ma_pin);
	    
		if(ma_pin==123){
	   	printf("nhap so tien ban rut :");
	   	scanf("%d",&tien_rut);
	   	printf("giao dich thanh cong ");
	   	printf("ban co muon giao dich nua khong?");
	   	printf("tiep tuc chon yes");
	   	printf("dung giao dich chon No");
	   	scanf("%s",&j);
	   	if(j=='No'){break;}else{dem=0; continue;}
		} else {
		 	dem++;
		 	if(dem==3) {
			printf("ban da bi khoa the");
			break;
			}
		}
	}
	return 0;
}

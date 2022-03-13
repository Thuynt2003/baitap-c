#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tongPTCuaMang;
	int i;
	int j;
	int mangSoNguyen [100];
	int toan;
	int li; 
	int hoa;
	int tong;
	int tb;
	printf ("diem mon toan la: ");
	scanf ( "%d", &toan);
	printf ( "diem mon li la: ");
	scanf ( "%d", &li);
    printf ( "diem mon hoa la: ");
    scanf ("%d", &hoa);
    tong = toan + li + hoa ;
    printf ( "tong ba mon la %d\n",tong);
    tb = tong / 3 ;
    printf( "trung binh ba mon la %d\n",tb);
    
    //Cau lenh re nhanh if else
    if(tong >= 15) {
    	printf("Qua mon");
	} else {
		printf("Truot mon");
	}
	
	//Vong lap
	//for(dk bat dau; dk dung vong lap; phan tu o lan lap tiep theo)
	//printf("\n%d - %d", mangSoNguyen[4], mangSoNguyen[5]);
	printf("\nNhap vao so phan tu cua mang: ");
	scanf("%d", &tongPTCuaMang);
	
	//nhap vao gia tri cua cac phan tu trong mang su dung vong lap
	for(i = 0; i < tongPTCuaMang; i++) {
		printf("\nNhap phan tu thu %d cua mang: ", i);
		scanf("%d", &mangSoNguyen[i]);
	}
	
	//in ra gia tri cac phan tu trong mang su dung vong lap
	for(j = 0; j < tongPTCuaMang; j++) {
		printf("\nPhan tu thu %d cua mang la: %d", j, mangSoNguyen[j]);
	}
  
	return 0;
}

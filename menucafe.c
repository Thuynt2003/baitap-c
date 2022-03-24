#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int gia_tien;
	int tong_tien;
	int goi_do,sl;
	tong_tien=0;
    int tiep_tuc;
	do{
		printf("1.cafe sua\n");
		printf("2.cafe sua\n");
		printf("3.cafe sua\n");
		printf("4.cafe sua\n");
		printf("5.cafe sua\n");
		printf("moi ban chon do:");
		scanf("%d",&goi_do);
		switch(goi_do){
			case 1:
				gia_tien=2300;
				printf("nhap so luong:");
				scanf("%d",&sl);
				tong_tien+=gia_tien*sl;
				printf("tong tien tra :%d\n",tong_tien);
				break;
			case 2:
				gia_tien=2400;
				printf("nhap so luong:");
				scanf("%d",&sl);
				tong_tien+=gia_tien*sl;
				printf("tong tien tra :%d\n",tong_tien);
				break;
			case 3:
				gia_tien=2500;
				printf("nhap so luong:");
				scanf("%d",&sl);
				tong_tien+=gia_tien*sl;
				printf("tong tien tra :%d\n",tong_tien);
				break;
			case 4:
				gia_tien=2600;
				printf("nhap so luong:");
				scanf("%d",&sl);
				tong_tien+=gia_tien*sl;
				printf("tong tien tra :%d\n",tong_tien);
				break;
			case 5:
				gia_tien=2700;
				printf("nhap so luong:");
				scanf("%d",&sl);
				tong_tien+=gia_tien*sl;
				printf("tong tien tra :%d\n",tong_tien);
				break;
		}
		printf("ban co muon goi them do khong?\n");
		printf("1.Yes||2.No\n");
		printf("nhap lua chon cua ban :");
		scanf("%d",&tiep_tuc);
	}
	while(tiep_tuc!=2);	

	return 0;
}

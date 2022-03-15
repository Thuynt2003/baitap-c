#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int a;
     int r;
     int du;
//bai toan so chan le
     printf("nhap so :");
     scanf("%d",&a);
     r=a/2;
     du= a%2;
   if(du==0){
   	printf("la so chan\n ",r);
    }
    else{
   	printf("la so le\n",r);
	}
// bai toan nguyen an ,nguyen duong
    if(a<0){
     printf("la so nguyen am\n");}
    else{
   	 printf("la so nguyen duong\n");
	}		
//bai toan chuyen doi tien 
     float tien_dola;
     float tien_viet;
     float dola_viet;
     float viet_dola;
     int j;
	 printf("nhap so 1 de chuyen VND sang USD\n");
	 printf("nhap so 2 de chuyen USD sang VNDt\n");
	 printf("nhap de lua chon:");
	 scanf("%d",&j);
	if(j==1){
	 printf("so VND can chuyen doi:");
	 scanf("%f",&tien_viet);
	 printf("ty ga USD la:");
	 scanf("%f",&tien_dola);
	 viet_dola =tien_dola/tien_viet;
	 printf("so tien dc quy doi la:%f \n",viet_dola ); 
	}
	if(j==2) {
	 printf("so tien USD can chuyen doi:");
	 scanf("%f",&tien_dola);
	 printf("ty gia VND la:");
	 scanf("%f",&tien_viet);
	 dola_viet=tien_dola*tien_viet;
	 printf("so tien dc quy doi la:%f \n",dola_viet); 
	}		
// bai toan tinh dien tich va chu vi vong tron
     int d ;
     float s;
     float c;
     printf ("nhap gia tri ban kinh:");
     scanf("%d",&d);
     s =(pow(d,2))*3.14;
     printf("dien tich hinh tron la:%0.4f\n",s);
     c = 2*d*3.14;
     printf(" chu vi hinh tron la:%0.4f\n",c);
     //truong trinh nhap chieu cao ,canh day ,hien thi tinh dien tich tam giac 
     int chieu_cao;             
     int canh_day;
     float dien_tich;
	 printf("chieu cao tam giac la:");
	 scanf("%d",&chieu_cao);
	 printf("canh day tam giac   la:");
	 scanf("%d",&canh_day);
	 dien_tich=((float) 1/2)*chieu_cao*canh_day;
	 printf("dien tich tam giac la:%0.4f\n",dien_tich);
	 //bai toan tinh the tich khoi tru voi chieu cao va ban kinh 
	 int h;
	 int ban_kinh;
	 float the_tich;
	 printf ("chieu cao khoi tru la:");
	 scanf("%d",&h);
	 printf("ban kinh khoi tru la:");
	 scanf("%d",&ban_kinh);
	 the_tich=3.14*(pow(ban_kinh,2))*h;
	 printf("the tich khoi tru la:%0.4f",the_tich);
	 return 0;
}

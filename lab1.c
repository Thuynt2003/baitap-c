#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
// bai toan so chan, so le,so nguyen am ,so nguyen duong 
     int a;
     int r;
     int du;
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
    if(a<0){
     printf("la so nguyen am\n");}
    else{
   	 printf("la so nguyen duong\n");
	}		
//bai toan chuyen doi tien te  
     float usd;
     float vnd;
     float usd_vnd;
     float vnd_usd;
     int j;
	 printf("nhap so 1 de chuyen VND sang USD\n");
	 printf("nhap so 2 de chuyen USD sang VND\n");
	 printf("nhap de lua chon:");
	 scanf("%d",&j);
	if(j==1){
	 printf("so VND can chuyen doi:");
	 scanf("%f",&vnd);
	 printf("ty ga USD la:");
	 scanf("%f",&usd);
	 vnd_usd =vnd*usd;
	 printf("so tien dc quy doi la:%f \n",vnd_usd ); 
	}
	if(j==2) {
	 printf("so tien USD can chuyen doi:");
	 scanf("%f",&usd);
	 printf("ty gia VND la:");
	 scanf("%f",&vnd);
	 usd_vnd=usd*vnd;
	 printf("so tien dc quy doi la:%f \n",usd_vnd); 
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

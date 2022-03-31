#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float GatArea (int x,int y ,int z);
void main ()
{
	float a,b,c;
	printf("nhap ba canh tam giac:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a ){

		printf(" dien tich tam giac la %f",GatArea (a,b,c));
	}
	else{
		printf("nhap sai");
	}
	
}
float GatArea (int x,int y ,int z){
	float s,p;
	p=(x+y+z)/2;
	s = sqrt(p*(p-x)*(p-y)*(p-z));
	return s;

}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



   
int sum(int a,int b){
	int c=a+b;
	return c;
	}
int sub(int a,int b){
	int d=a-b;
	return d;}
void main (){
	int x,y,s1,s2;
	char n;
	printf("nhap x=");
	scanf("%d",&x);
	printf("nhap y=");
	scanf("%d",&y);
	s1=sum(x,y);
	s2=sub(x,y);
 printf("nhap lua chon cua ban :");
 fflush(stdin);
   scanf("%c",&n);
   switch(n){
   	case'+':
   		printf ("tong hai so la %d",s1);
   		break;
    case'-':
    	printf("hieu hai so la %d",s2);
    	break;
    }
}
   		
    


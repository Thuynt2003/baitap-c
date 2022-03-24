#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,s,n;
	printf("nhap mot so:");
	scanf("%d",&a);
	for(s=0;a!=0;a/=10)
	{
		n=a%10;
		printf("n=%d\n",n);
		s+=n;
	
	}
	printf("%d\n",s);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m1;
	int m2;
	int m3;
	int avg;
	printf("Enter first subjects  scores:");
	scanf("%d",&m1);
	printf("Enter second subjects  scores:");
	scanf("%d",&m2);
	printf("Enter three subjects  scores:");
	scanf("%d",&m3);
	avg=(m1+m2+m3)/3;
	printf("The average score is %d\n");
	if(avg>=90)
	printf("student ratings is :E+");
    else if(80<avg<90)
	printf("student ratings is :E");
    else if(70<avg<80)
	printf("student ratings is :A+");
	else if(60<avg<70)
	printf("student ratings is :A");
	else if(50<avg<60)
	printf("student ratings is :B+");
	else
	printf("you failed the subject");
return 0;	
}

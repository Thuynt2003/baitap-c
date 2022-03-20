#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int year;
	printf("\n please enter a year:");
	scanf("%d",&year);
	if(year %4==0 && year %100!=0 || year % 400==0);
	printf("\n%d is a leap year",year);
	
}

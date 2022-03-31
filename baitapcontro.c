#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int value=500;
	int *p;
	p=&value;
	printf("gia tri cua value la: %d \n",value);
	printf("dia chi cua value la: %d \n",&value);
    printf("gia tri cua p la: %d \n",p);
    printf("gia tri cua value dua tren p la :%d \n",*p);
    *p = 4000;
    printf("gia tri cua value sau khi thay doi la: %d \n", value);
    printf("gia tri cua value sau khi thay doi la: %d \n", p);
	return 0;
}

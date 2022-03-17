#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char letter;
	printf("\nPlease enter any character : ");
	letter=getchar();
	printf("\nThe character entered by you is %c . ", letter);
}

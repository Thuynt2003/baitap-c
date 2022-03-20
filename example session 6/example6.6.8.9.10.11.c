#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i;
	float x;
	char c;
	char line[80];
	char item[20];
	int partno;
	float cost;
	scanf("%3d %5f %c",&i,&x,&c);
	scanf("%[ABCDEFGHIJKLMNOPQ]",line);
	scanf("%[^\n]",line);
	scanf("%s %*d %f",item,&partno,&cost);
}

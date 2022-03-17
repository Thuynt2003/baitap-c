#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
int a,b,c,sum;
int princical,period;
float rate,si;
printf ("enter any three numbers: \n")	;
scanf ("%d %d %d",&a,&b,&c);
sum =a+b+c;
printf("\n sum=%d",sum);
princical=1000;
period=3;
rate=8.5;
si=princical*period*rate/100;
printf("%f",si)	;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
      printf ("enter value of x :");
     scanf("%d",&x);
     printf("enter value of y :");
     scanf("%d",&y);
    if (x<2000 && x>3000) // this case will never be happened, we have no number greater than 3000 and less than 2000!!!
     printf("value of x is %d",x);
    if(100<y<500)
     printf("value of y is %d",y);
	return 0;
}

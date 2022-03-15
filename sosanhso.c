#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	printf("nhap so thu nhat  :\n");
	scanf("%d",&num1);
		printf("nhap so thu hai  :\n");
	scanf("%d",&num2);

	
	
	if(num1==num2){
		printf("%d bang %d\n",num1,num2);
		}
	if(num1!=num2) {
		printf("%d khong bang %d\n",num1,num2);
		}
    if(num1<num2) {
		printf("%d be hon %d\n",num1,num2);
		}
	if(num1>num2) {
		printf("%d lon hon %d\n",num1,num2);
		}
    if(num1<=num2) {
		printf("%d be hon hoac bang %d\n",num1,num2);
		}
		if(num1>=num2) {
		printf("%d lon hon hoac bang %d\n",num1,num2);
		}
	
	 return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char a,str[81],*ptr;
	printf("\nEnter a sentence:");
	gets(str);
    printf("\nEnter character to search for:");
	a=getchar();
	ptr=strchr(str,a);
	printf("\nString starts at address: ",str);
	printf("\nFirst occurrence of the character is at address: %u", ptr);
	printf("\n Position of first occurrence (starting from 0)is: %d", ptr-str);
    if(ptr==0){
	      printf("\nNo");
	}
	else{
		printf("\nYes");
	}
	
	
}

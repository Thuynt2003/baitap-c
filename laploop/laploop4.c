#include <iostream>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	while(1==1){
		char i;
	printf("nhap ki tu bat ki tren ban phim:");
	scanf("%s",&i);
	if(!isspace(i)){
	 if(isdigit(i)){
	 	printf("ban vua nhap mot so\n");
	 	}
	 else if(isalpha(i)){
	 	printf("ban vua nhap mot chu cai\n");
	 	}
	 else {
	 	printf("ban vua nhap mot ki tu dac biet\n");
	 }
	}
	else{break;}
	}
}

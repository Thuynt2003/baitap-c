#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ten[20][7],temp[20];
	int i,j;
	for(i=0;i<7;i++){
		printf("nhap ten thu %d: ",i+1);
		scanf("%s",&ten[i]);
	}
	printf("=====================================\n");
	for(i=0;i<7;i++){
		printf("ten thu %d la: %s\n",i+1,ten[i]);
	}
	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(strcmp(ten[i], ten[j]) > 0){
				strcpy(temp, ten[i]);
				strcpy(ten[i], ten[j]);
				strcpy(ten[j], temp);
			}
		}
	}
    for (i=0;i<7;i++)
    printf("ten sau khi sap xep la: %s\n",ten[i]);
	return 0;
}

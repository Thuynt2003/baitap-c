#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char van_ban[100];
	int i=0;
	int nguyen_am=0;
	
	printf("nhap van ban cua ban : ");
	scanf("%s",&van_ban);
	while(van_ban[i]!='\0'){
		if(van_ban[i]=='a'||van_ban[i]=='i'||van_ban[i]=='o'||van_ban[i]=='u'||van_ban[i]=='e'){
		nguyen_am++;}
		i++;
	}
	printf("co %d nguyen am",nguyen_am);
}

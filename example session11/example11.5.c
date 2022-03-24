#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
		int arr[2][3];
		int row,col;
		for(row=0;row<2;row++){
			for(col=0;col<3;col++){
				printf("\nEnter a number at[%d][%d]:",row,col);
				scanf("%d",&arr[row][col]);
			}
		}
		for(row=0;row<2;row++){
			for(col=0;col<3;col++){
				printf("\nThe number at[%d][%d]is %d",row,col,arr[row][col]);
			}
		}
	}

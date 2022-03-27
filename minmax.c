#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mangsonguyen[5];
	int i;
	int max,min;
	int sum=0;
	float avg;
	for(i=0;i<5;i++){
		printf("nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&mangsonguyen[i]);
	}
	max = mangsonguyen[0];
	min = mangsonguyen[0];
	printf("======================================\n");
	for(i=0;i<5;i++){
		printf("phan tu thu %d cua mang la: %d\n", i+1, mangsonguyen[i]);
		sum+=mangsonguyen[i];
		if(max<mangsonguyen[i]) max=mangsonguyen[i];
		if(min>mangsonguyen[i]) min=mangsonguyen[i];
	}
	printf("======================================\n");
	printf("tong cac phan tu cua mang la: %d\n", sum);
	avg=(float)sum/5;
	printf("trung binh cong phan tu cua mang la: %0.1f\n",avg);
	printf("======================================\n");
	printf("gia tri lon nhat cua mang la :%d\n",max);
	printf("gia tri nho nhat cua mang la :%d",min);
	
	return 0;
}

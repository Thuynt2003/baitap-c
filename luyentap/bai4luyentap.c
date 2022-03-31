#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void indexMin(int arr[], int size)
{
    int i,min;
    min = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }printf("Min value: %d\n",min);
}
int main(int argc, const char * argv[]) {
    int arr[10],i;
    
    for(i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    indexMin(arr,10);
    return 0;
}

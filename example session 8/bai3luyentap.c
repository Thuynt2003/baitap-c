#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int * reverse(int arr[], int size)
{
    int i,j, int newArr[size];
    for(i=size-1; i>=0; i--)
    {
        if(size)
    }
    return arr;
}

int main(int argc, const char * argv[]) {
    int arr[5],i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int reArr[5] = reverse(arr, 5);
    
    for(i=0;i<5;i++)
    {
        printf("number %d: ",reArr[i]);
    }
    return 0;
}

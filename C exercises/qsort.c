#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int compear(const void* a,const void* b){

    int *x = (int*)a;
    int *y = (int*)b;
    return *y - *x;
}

void main()
{
    int arr[SIZE] = {11,2,32,13,-123,4,1,3,12,0};
    int temp=0;

    qsort((void*)arr,SIZE,sizeof(int),compear);
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
}
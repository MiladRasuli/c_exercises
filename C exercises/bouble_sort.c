#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void main()
{
    int arr[SIZE] = {11,2,32,13,-123,4,1,3,12,0};
    int temp=0;

    //boubel sort metod
    for(int i=0;i<SIZE;++i)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
}
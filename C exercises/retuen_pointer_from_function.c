#include <stdio.h>
#include <stdlib.h>

int* num1()
{
    int num[5]={1,2,5,7,9};
    return num;
}
int* num2()
{
    static int num[5]={1,2,5,7,9};
    return num;
}

int* num3()
{
    int* num = calloc(5,sizeof(int));
    num[0] =1;num[1] =2;
    num[2] =5;num[3] =7;
    num[4] =9;
    return num;
}

void main (int arg , char **argv)
{

    int* n1;
    int* n2;
    int* n3;

    n3 = num3();
    puts("this is the num3 value:");
    for(int i=0;i<5;++i)
    {
        printf("%d ",n3[i]);
    }

    n2 = num2();
    puts("\nthis is the num2 value:");
    for(int i=0;i<5;++i)
    {
        printf("%d ",n2[i]);
    }

    n1 = num1();
    puts("\nthis is the num1 value:");
    for(int i=0;i<5;++i)
    {
        printf("%d ",n1[i]);
    }

    free(n3);
}
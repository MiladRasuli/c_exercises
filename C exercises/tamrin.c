#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int compear(const void* a,const void* b){

    int *x = (char*)a;
    int *y = (char*)b;
    return *x - *y;
}

int str_len(const char *s)
{
    int i;
    for(i=0;*(s+i);i++);
    return i;
}

void main()
{
    char str[SIZE]={0};

    fgets(str,SIZE,stdin);

printf("%s",)
    str[SIZE-1]=0;

    qsort((void*)str,str_len(str)-1,sizeof(1),compear);

    for(int i=0;i<str_len(str);i++)
        printf("%c",str[i]);
}
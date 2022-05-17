#include <stdio.h>
#include "variable.h"


extern int num[4];
void main (int arg , char **argv)
{

    int l=0;
    for(l=0;l<4;l++)
    {
        printf("%d ",num[l]);
    }

}
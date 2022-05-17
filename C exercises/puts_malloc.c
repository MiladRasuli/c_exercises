#include <stdio.h>
#include <stdlib.h>

void main (int arg , char **argv)
{
    int *mem = (int *) malloc(4*sizeof(int));
    int l=0;
    if(!mem)
    {
        //puts doesn't need \n 
        puts("you cannot get memory !!");
        return;
    }
    puts("you can get memory!");
    mem[0] = 10;
    mem[1] = 112;
    mem[2] = 92;
    mem[3] = 550;
    
    for(l=0;l<4;l++){
        printf("%d ",mem[l]);
    }

    free(mem);
}
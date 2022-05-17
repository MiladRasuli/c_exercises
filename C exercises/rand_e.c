#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main (int arg , char **argv)
{
    time_t my_time = time(NULL);
    int ra=0;
    srand(my_time);

    ra = rand();
    printf("this is the time : %lld\n",my_time);
    printf("this is the rand value : %lld\n",ra);

    
}
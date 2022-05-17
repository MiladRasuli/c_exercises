#include <stdio.h>
#include <math.h>


void main (int arg , char **argv)
{
    float f=0;
    scanf("%f",&f);

    f = sqrt(abs(f));

    printf("the sqrt result is : %f",f);

}
#include <stdio.h>

void main ()
{
    unsigned int n=0;
    char * msg;
    scanf("%u",&n);
    msg = (n%2)?"odd":"even";
    printf("%s\n",msg);
}
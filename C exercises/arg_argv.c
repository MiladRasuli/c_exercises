#include <stdio.h>


//note:
//if you enter "Hello" as input in this program you will 
// get Hello with out " . it's a tip
// void main (int arg , char *argv[])
void main (int arg , char **argv)
{
    int l;
    printf("you entered %d argument .\n" ,arg);

    if(arg<=1){
        printf("you have to enter a argumant as input.\n");
    }
    for(l=1;l<arg;++l){

        printf("the arguments are %s \n",argv[l]);
    }
}
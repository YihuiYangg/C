#include <stdio.h>

int main(){
    int vector[5]={13,24,35,46,57};
    int*address=vector;
    printf("\nAddress[0]=%d\n",*address);
    printf("\nAddress[1]=%d\n",*(address+1));
    printf("\nAddress[2]=%d\n",*(address+2));
}
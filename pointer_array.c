#include <stdio.h>

int main(){
    int vector[5]={5,4,3,2,1};
    int*address;
    address=vector;
    printf("\n\n address=%p\n",address);
    printf("vector=%p\n\n",vector);
    printf("address[0]=%d,vector[1]=%d\n\n",address[0],vector[1]);

}
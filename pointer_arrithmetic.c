#include <stdio.h>

int main(){
    int a=0;
    int *k=&a;
    
    printf("%u\n",k);
    k++;
    printf("%u",k);
    return 0;
}
#include <stdio.h>

int main(){
    int a;

    for ( a = 10; a >= 1; --a)
    {
        printf("10 * %d = %d \n",a,a*10);
    }
    
    return 0;
}
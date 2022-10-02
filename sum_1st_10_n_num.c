#include <stdio.h>

int main() {
    int a,n, sum =0 ;
    printf("put n numbers : ");
    scanf("%d",&n);
 

    for (a = 0; a <= n; a++)
    {
        sum += a;
        printf("%d \n", sum);
    }

    return 0;
}
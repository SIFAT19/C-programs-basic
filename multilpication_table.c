#include <stdio.h>

int main(){
    int a;
    int num;
    printf("Enter Your Number:");
    scanf("%d",&num);
    for ( a = 1; a<= 10; ++a)
    {
        printf("%d * %d = %d \n",num,a,num*a);
    }
    

    return 0;
}
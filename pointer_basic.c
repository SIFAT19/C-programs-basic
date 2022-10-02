#include <stdio.h>

int main(){
    int i;
    printf("Put the value:");
    scanf("%d",&i);
    int *j=&i; // now j will store the address of i
    printf("The value of i is %d \n",i);
    printf("The value of i is %d \n",*j);
    printf("The value of j is %d \n",*(&j)); 
    printf("The address of i is %d \n",j);
    printf("The address of i is %d \n",&i);
    printf("The address of j is %d \n",&j);

    return 0;
}
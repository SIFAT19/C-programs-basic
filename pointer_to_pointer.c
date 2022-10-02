#include <stdio.h>

int main(){
    int i=32;
    int *j=&i;
    int **k;
    k=&j;
    int ***l;
    l=&k;
    printf("The value of i %d \n",i);
    printf("The value of i %d \n \n",*j);
    printf("The value of j %d \n",*(&j));
    printf("The value of j %d \n \n",*k);
    printf("The value of k %d \n",*(&k));
    printf("The value of k %d \n\n",*l);
    printf("The value of l %d \n\n",*(&l));
    printf("The address of i %d \n",j);
    printf("The address of i %d \n\n",&i);
    printf("The address of j %d \n",k);
    printf("The address of j %d \n\n",&j);
    printf("The address of k %d \n",l);
    printf("The address of k %d \n\n",&k);
    printf("The address of l %d \n",&l);

    return 0;
}
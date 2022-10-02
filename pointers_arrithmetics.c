#include <stdio.h>

int main(){
    int marks[4];
    int*k;
    k=&marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %dth studdent\n",i+1);
        scanf("%d",k);
        k++;}

        for (int i = 0; i < 4; i++){

         printf(" the marks for studdent %d is %d  \n",i+1,marks[i]);
        }
      
    return 0;
}
#include <stdio.h>

int main(){
    int arr[10];
    int c;
    printf("put the number for multiplication\n:");
    scanf("%d",&c);
   
    for (int i = 0; i < 10; i++)
    {
        arr[i]=c*(i+1);
        printf("%d X %d = %d\n",c,i+1,arr[i]);
    }
    
    return 0;
}
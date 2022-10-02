#include <stdio.h>

int main(){
    int a=0;
    do
    {
        printf("%d\n",a);
        if (a==4)
        {
            break;
        }
        a++;
        
    } while (a<30);
    

    return 0;
}
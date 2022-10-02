#include <stdio.h>
void change(int b);
int main(){
    int b =356;
    printf("before change %d\n",b);
    change(b);
    printf("after cahnge %d \n",b);
    
    return 0;
}
void change(int b){
    b =45;
}
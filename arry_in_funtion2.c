#include <stdio.h>
void printArry(int *k, int n) {
    for (int i = 0; i < n; i++)

    {
        printf("The value of %d is %d \n", i + 1, *(k+i));
    }

}

int main() {
    int arr[]={1,2,34,567,77};
    printArry(arr,5);


    return 0;
}
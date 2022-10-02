#include <stdio.h>
void printArry(int k[], int n) {
    for (int i = 0; i < n; i++)

    {
        printf("The value of %d is %d \n", i + 1, k[i]);
    }
    k[3]=456; // the value will be change in arr arry in main aas well
}

int main() {
    int arr[]={1,2,34,567,77};
    printArry(arr,5);
    printf("%d",arr[3]);

    return 0;
}
#include <stdio.h>
void SumAndAvarage(int a, int b, int* sum, float* avg) {
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main() {
    int i, j, sum;
    float avg;
    printf("Put two numbers : \n");
    scanf("%d%d", &i, &j);
    SumAndAvarage(i, j, &sum ,&avg);
    printf("The value of sum: %d\n", sum);
    printf("The value of avg: %f\n", avg);


    return 0;
}
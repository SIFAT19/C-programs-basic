#include <stdio.h>

int main() {
    float a;
    printf("Temprature in celcius: \n");
    scanf("%f", &a);
    printf("Teprature in Farenheight: %f \n", ((a * 1.8) + 32));
    return 0;
}
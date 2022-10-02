#include <stdio.h>

int main() {
    int n;
    printf("Put your number:");
    scanf("%d", &n);
    int i = 0;
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("factorial of %d is: %d", n, fact);


    return 0;
}
#include <stdio.h>
int main() {
    int a;
    int sum = 0;
    for (a = 1; a <= 10; ++a)
    {

        printf("%d*8=%d\n", a, a * 8);
        sum = sum + a * 8;

    }
    printf("%d", sum);
    return 0;
}
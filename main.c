#include <stdio.h>

int main(void) {
    int a, b;
    int result = scanf("%d %d", &a, &b);
    printf("%d\n", a * b);
    return 0;
}

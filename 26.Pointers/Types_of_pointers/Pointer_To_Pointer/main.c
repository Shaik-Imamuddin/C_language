#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int *ptr = &x;
    int **pptr = &ptr;
    printf("pointer: %d\n", *ptr);
    printf("pointer to pointer: %d\n", **pptr);
    return 0;
}
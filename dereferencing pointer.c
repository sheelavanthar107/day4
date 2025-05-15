#include <stdio.h>
int main() {
    int a = 1;
    int *ptr = &a; 
    printf("Value of a: %d\n", a);
    printf("Value stored in ptr (address of a): %d\n", *ptr);
    return 0;
}

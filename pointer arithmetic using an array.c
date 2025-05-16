#include <stdio.h>
int main() {
    int arr[] = {15, 20, 25, 45, 50};
    int *ptr = arr;  
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Demonstrating pointer arithmetic:\n\n");
    for (int i = 0; i < size; i++) {
        printf("Address of arr[%d] = %p\t", i, (ptr + i));
        printf("Value at *(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}

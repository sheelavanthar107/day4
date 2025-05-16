#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int n = sizeof(arr) / sizeof(arr[0]);
    ptr = arr;
    printf("Elements of the array using pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5},i;
    int *harsha = arr;  
    for (int i = 0; i<5; i++) {
        printf("%d",*harsha+i);
        printf("%p",harsha+i);
    }

}

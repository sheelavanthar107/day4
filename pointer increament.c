#include <stdio.h>
int main() {
    int arr[] = {1, 4, 7};
    int *p = arr;
    printf("%d\n", *p);  
p++;                
    printf("%d\n", *p);    
p++;                
    printf("%d\n", *p);    
    return 0;
}

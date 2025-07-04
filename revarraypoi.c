#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr;
    
    printf("Array in straight order:\n");
    ptr = arr;  
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\nArray in reverse order:\n");
    ptr = &arr[n - 1];  
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
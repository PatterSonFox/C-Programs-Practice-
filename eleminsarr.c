#include <stdio.h>
int main() {
    int array[100], size, element;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);
    array[size] = element;
    size++;
    printf("Updated array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    } 
    return 0;
}

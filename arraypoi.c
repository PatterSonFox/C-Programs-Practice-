#include<stdio.h>
int main(){
    int aadhar[5];

    int *ptr = &aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d. index: ", i);
        scanf("%d", (ptr+i));
    }
    printf("Array: \n");
    for(int i=0;i<5;i++){
        printf("%d. %d \n", i, *(ptr+i));
    }
}
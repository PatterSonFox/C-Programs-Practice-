#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("enter numbers(5):");
    for(int i=0;i<5;i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("number %d is %d\n", i+1, ptr[i]);
    }
    return 0;
}
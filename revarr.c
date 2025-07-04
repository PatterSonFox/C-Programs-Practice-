#include<stdio.h>
void printArray(int arr[], int n);
void revArray(int arr[], int n);
int main(){
    int arr[]={1,2,3,4,5};
    revArray(arr,5);
    printArray(arr,5);
    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<5; i++){
        printf("%d \t", arr[i]);
    }
}

void revArray(int arr[], int n){
    for(int i=0; i<n/2;i++){
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]= secondVal;
        arr[n-i-1]= firstVal;
    }
}
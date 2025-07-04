#include<stdio.h>
int main(){
    int arr[]={124,134,756,346,789,436,854,257,896};
    int n =sizeof(arr)/sizeof(arr[0]);
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("Largest in the array is: %d", largest);
}
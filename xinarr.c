#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,2,1,4,5,6,3,2,6,8,3,9,4,3,5,9,4,5,2,3,1,5,7,3,7,9,7,6,4,3,2,7,5,1,9};
    int n= sizeof(arr) / sizeof(arr[0]);
    int count =0;
    int v;
    printf("Enter number to find count: ");
    scanf("%d", &v);
    for(int i=0; i<n; i++){
        if(arr[i]==v){
            count+=1;
        }
    }
    printf("Count of number %d is: %d", v, count);
}
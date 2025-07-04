#include<stdio.h>
int fsqrt(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int root= fsqrt(n);
    if(root==0){
        printf("Not a square number.");
    }
    else{
        printf("Square Roof of %d is: %d",n,root);
    }
}
int fsqrt(int n){
    int root=0;
    for(int i=0; i<=n;i++){
        if(i*i==n){
            root=i;
            break;
        }
    }
    return root;      
}
#include<stdio.h>
float fpower(int n, int t);
int main(){
    int n,t;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter it's power:\n");
    scanf("%d", &t);
    printf("The number %d to the power %d is: %f",n,t,fpower(n,t));
}
float fpower(int n, int t){
    float a=1;
    for(int i=0; i<t;i++){
        a=a*n;
    }
    return a;
}
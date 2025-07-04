#include<stdio.h>
int main(){
    int a= 45, b=56;
    int *m= &a;
    int *n= &b;
    if((*m)>(*n)){
        printf("Maximum= %d", (*m));
    }
    else{
        printf("Maximum= %d", (*n));
    }
}
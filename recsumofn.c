#include<stdio.h>
int sum(int n);
int main(){
    printf("Sum is: %d", sum(10));
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int SumNm1= sum(n-1);
    int SumN=SumNm1+n;
    return SumN;
}
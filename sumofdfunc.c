#include<stdio.h>
int sum(int n);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d",num,sum(num));
}
int sum(int n){
    int count=0,sum=0,s=0;
    int h=n;
    while(n!= 0) {
        n/= 10;
        count++;
    }
    for(int i=0;i<count;i++) {      
        s=h%10;
        h/=10;
        sum+=s;
    }
    return sum;
}
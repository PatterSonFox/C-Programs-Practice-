#include<stdio.h>
typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;
int main(){
    acc acc1={123, "W2S"};
    acc acc2={124, "Behz"};
    acc acc3={125, "MiniM"};
    printf("Acc No= %d \n", acc1.accountNo);
    printf("Name= %s \n", acc1.name);
}
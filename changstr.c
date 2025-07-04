#include<stdio.h>
int countName(char arr[]);
int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("length of name is: %d", countName(name));
}
int countName(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    count--;
    return count;
}
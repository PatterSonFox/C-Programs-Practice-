#include<stdio.h>
void slice(char str[], int n, int m);
int main(){
    char str[]="HelloWorld";
    slice(str,1,4);
}
void slice(char str[],int n, int m){
    char newStr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}
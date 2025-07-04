#include<stdio.h>
int main(){
    char str1[100];
    char ch;
    int i=0;
    while(ch != '\n'){
        scanf("%c", &ch);
        str1[i]= ch;
        i++;
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
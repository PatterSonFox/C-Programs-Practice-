#include<stdio.h>
#include<string.h>
int main(){
    //char name[]="devansh"; 
    //printf("%d", strlen(name));
    //return 0;

    char str1[]="dev";
    char str2[]="ved";
    printf("%s, %s \n", str1, str2);
    strcpy(str1,str2);
    printf("%s, %s", str1, str2);
}
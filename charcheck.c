#include<stdio.h>
void checkChar(char str[], char ch);
int main(){
    char str[]="Hello There!";
    char ch='T';
    checkChar(str, ch);
}
void checkChar(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("Character is present.");
            return;
        }
    }
    printf("Character is not present.");
}
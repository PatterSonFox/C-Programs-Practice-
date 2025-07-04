#include<stdio.h>
int countVow(char str[]);
int main(){
    char str[100];
    printf("Enter string:");
    fgets(str, 100, stdin);
    printf("No. of Vowels are: %d", countVow(str));
}

int countVow(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
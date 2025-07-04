#include<stdio.h>
void printName(char arr[]);
int main(){
    char firstName[] = "Devansh";
    char secName[]="Tripathi";
    printName(firstName);
    printName(secName);
    return 0;
}

void printName(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    printf("\t");
}
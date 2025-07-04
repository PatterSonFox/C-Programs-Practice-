#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("NewTest.txt","r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);

    int p;
    fscanf(fptr, "%d", &p);
    printf("character= %d\n", p);
    fscanf(fptr, "%d", &p);
    printf("character= %d\n", p);
    fclose(fptr);
    return 0;
}
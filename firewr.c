#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("NewTest.txt","w");
    fputc('B', fptr);
    fputc('A', fptr);
    fputc('T', fptr);
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    return 0;
}
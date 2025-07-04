#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Odd.txt","w");
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr, "%d, ", i);
        }
    }
    fclose(fptr);
    return 0;
}
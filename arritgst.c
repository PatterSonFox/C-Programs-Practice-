#include<stdio.h>
int main(){
    float items[3];
    printf("Enter price of 3 items: \n");
    int i;
    for(i=0;i<=2;i++){
        scanf("%f", &items[i]);
    }
    printf("Cost of items:\n");
    for(i=0;i<3;i++){
        printf("%f \n", items[i]+((0.18)*items[i]));
    }
}
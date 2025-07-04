#include<stdio.h>
typedef struct vector{
    int x;
    int y;
}sv;
void Vecaddition(struct vector v1, struct vector v2, struct vector sum);
int main(){
    sv v1={3,6};
    sv v2={8,2};
    sv vecsum={0};
    Vecaddition(v1,v2, vecsum);
    return 0;
}
void Vecaddition(struct vector v1, struct vector v2, struct vector sum){
    int x= v1.x+v2.x;
    int y= v1.y+v2.y;
    printf("x= %d \n", x);
    printf("y= %d \n", y);
}
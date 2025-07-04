#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number={5,8};
    struct complex *ptr= &number;
    printf("Real Part= %d \n", ptr->real);
    printf("Imaginary Part= %d \n", ptr->img);
    return 0;
}
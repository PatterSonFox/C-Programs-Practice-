#include<stdio.h>
int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
    int*_ptr=&_age;
    printf("%u, %u, Difference= %u \n", ptr, _ptr, ptr-_ptr);
    _ptr=&age;
    printf("%u, %u, Comparison= %u \n", ptr, _ptr, ptr == _ptr);
    return 0;
}
#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student ab={"Harry", 34, 7.8};
    printf("Name= %s \n", ab.name);
    printf("Roll No= %d \n", ab.roll);
    printf("CGPA= %f \n", ab.cgpa);
    
    struct student *ptr;
    ptr=&ab;
    printf("Roll No= %d \n", (*ptr).roll);
    printf("Roll No= %d \n", ptr->roll);
    return 0;
}

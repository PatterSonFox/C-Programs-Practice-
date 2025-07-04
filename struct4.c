#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);
int main(){
    struct student s1={"Devansh", 219, 7.19};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1){
    printf("Student Information \n");
    printf("Name= %s \n", s1.name);
    printf("Roll No= %d \n", s1.roll);
    printf("Name= %f \n", s1.cgpa);
}
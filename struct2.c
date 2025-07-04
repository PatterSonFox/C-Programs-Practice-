#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll= 456;
    s1.cgpa= 7.1;
    strcpy(s1.name, "Douglas");
    printf("Name= %s \n", s1.name);
    printf("Roll No= %d \n", s1.roll);
    printf("CGPA= %f \n", s1.cgpa);
    printf("\n");
    struct student s2;
    s2.roll= 457;
    s2.cgpa= 7.2;
    strcpy(s2.name, "Hoze");
    printf("Name= %s \n", s2.name);
    printf("Roll No= %d \n", s2.roll);
    printf("CGPA= %f \n", s2.cgpa);
    printf("\n");
    struct student s3;
    s3.roll= 458;
    s3.cgpa= 7.3;
    strcpy(s3.name, "Gasly");
    printf("Name= %s \n", s3.name);
    printf("Roll No= %d \n", s3.roll);
    printf("CGPA= %f \n", s3.cgpa);
    return 0;
}
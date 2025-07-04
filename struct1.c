#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    // s1.name= "Devansh Tripathi" Wrong way of input
    s1.roll= 219;
    s1.cgpa= 7.09;
    strcpy(s1.name, "Devansh Tripathi"); //Correct way to input string
    printf("Name= %s \n", s1.name);
    printf("Roll No= %d \n", s1.roll);
    printf("CGPA= %f \n", s1.cgpa);
    return 0;
}
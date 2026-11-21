#include<stdio.h>
#include<string.h>
void print(int *a);
struct student{
    int roll_no;
    float marks;
    char name[20];
};
int main(){
    struct student s1;
    struct student s2={12345678,98.76f,"kavya"};
    struct student s3={.roll_no=12345654,.marks=87.98f};
    struct student s4={0};
    s1.roll_no=12345678;
    s1.marks=90.87;
    strcpy(s1.name,"Rabi");
    print(&s1.roll_no);
    return 0;
}
void print(int *a){
    printf("The Roll no is %d\n",*a);
}

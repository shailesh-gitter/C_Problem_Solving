#include<stdio.h>
#include<string.h>
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
    printf("Roll No:%d\n",s1.roll_no);
    printf("Marks:%f\n",s1.marks);
    printf("Name:%s\n",s1.name);
    printf("Roll No:%d\n",s2.roll_no);
    printf("Marks:%f\n",s2.marks);
    printf("Name:%s\n",s2.name);
    printf("Roll No:%d\n",s3.roll_no);
    printf("Marks:%f\n",s3.marks);
    printf("Name:%s\n",s3.name);
    printf("Roll No:%d\n",s4.roll_no);
    printf("Marks:%f\n",s4.marks);
    printf("Name:%s\n",s4.name);
    return 0;
}
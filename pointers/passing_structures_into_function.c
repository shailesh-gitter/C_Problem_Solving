#include<stdio.h>
#include<string.h>
typedef struct 
{
    int roll_no;
    float marks;
    char name[20];
}student;
void updater(student *s);
int main(){
    student s1={.roll_no=123456,.marks=98.43f};
    strcpy(s1.name,"Killi");
    updater(&s1);
    printf("Roll No:%d\n",s1.roll_no);
    printf("Marks:%f\n",s1.marks);
    return 0;
}
void updater(student *s){
    s->roll_no=12321;
    s->marks=93.43f;
}
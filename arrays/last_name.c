#include<stdio.h>
#include<ctype.h>
int main(){
    char name[25];
    int ch;
    int fl;
    printf("Enter Your Name:");
    fl=toupper(getchar());
    while((ch=getchar())!=' ');
    scanf("%s",name);
    if (name[0] != '\0') {
        name[0] = toupper((unsigned char)name[0]);
    }
    printf("You Entered the name %s, %c.\n",name,fl);
    return 0;
}
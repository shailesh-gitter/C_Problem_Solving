#include<stdio.h>
#include<ctype.h>
void mystrcpy(char *c,const char *d);
int main(){
    char str[100];
    scanf("%99[^\n]%*c",str);
    printf("Before strcpy:%s\n",str);
    mystrcpy(str,"World");
    printf("After strcpy:%s\n",str);
    return 0;
}
void mystrcpy(char *c,const char *d){
    while((*d)!='\0'){
        *c=(*d);
        c++;
        d++;
    }
    *c='\0';
}
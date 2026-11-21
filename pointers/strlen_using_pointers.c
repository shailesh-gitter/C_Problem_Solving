#include<stdio.h>
int mystrlen(const char* a);
int main(){
    char string[100];
    scanf("%99[^\n]",string);
    int len=mystrlen(string);
    printf("The length of the string is %d\n",len);
    return 0;
}
int mystrlen(const char* a){
    const char* b=a;
    int l=0;
    while((*b)!='\0'){
        l++;
        b++;
    }
    return l;
}
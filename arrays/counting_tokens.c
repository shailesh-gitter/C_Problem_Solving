#include<stdio.h>
int main(){
    char s[100]="C is An wonderful Programming Language";
    int in_word=0;
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
           in_word=0;
        }
        else if(in_word==0){
            in_word=1;
            if(i!=0){
                s[i-1]='\n';
            }
            count++;
        }
    }
    printf("%s\n\nThe Number of Tokens is %d\n",s,count);
}
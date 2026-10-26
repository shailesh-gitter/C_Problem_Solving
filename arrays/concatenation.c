#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char sentence[200];
    char ch;
    printf("Enter the Sentence:");
    scanf("%[^\n]%*c",sentence);
    int len=strlen(sentence);
    for(int i=0;i<len;i++){
        ch=toupper((unsigned char)sentence[i]);
        sentence[i]=ch;
        switch(ch){
            case 'A':
                sentence[i]='4';
                break;
            case 'B':
                sentence[i]='8';
                break;
            case 'E':
                sentence[i]='3';
                break;
            case 'I':
                sentence[i]='1';
                break;
            case 'O':
                sentence[i]='0';
                break;
            case 'S':
                sentence[i]='5';
                break;
            default:
                break;
        }
    }
    strncat(sentence,"!!!!!!!!!!!!!!!",10);
    printf("The Message is: %s\n",sentence);
    return 0;
}
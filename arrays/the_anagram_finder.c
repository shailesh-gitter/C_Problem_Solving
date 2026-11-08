#include<stdio.h>
#include<ctype.h>
int main(){
    char name1[30];
    char name2[30];
    int num1[26]={0};
    int num2[26]={0};
    char letter;
    printf("Enter the first word:");
    scanf("%29s",name1);
    printf("Enter the second word:");
    scanf("%29s",name2);
    for(int i=0;name1[i]!='\0';i++){
        if(isalpha(name1[i])==0){
            printf("Invalid Input\n");
            return 1;
        }
        letter=toupper(name1[i]);
        num1[letter-65]+=1;
    }
    for(int i=0;name2[i]!='\0';i++){
        if(isalpha(name2[i])==0){
            printf("Invalid Input\n");
            return 1;
        }
        letter=toupper(name2[i]);
        num2[letter-65]+=1;
    }
    for(int i=0;i<26;i++){
        if(num1[i]!=num2[i]){
            printf("The word is not an anagram...\n");
            return 1;
        }
    }
    printf("The word is an anagram...\n");
    return 0;
}
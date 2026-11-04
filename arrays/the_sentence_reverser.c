#include<stdio.h>
int main(){
    char sentence[100];
    int ch;
    int terminator;
    int i=0;
    printf("Enter the sentence to reverse:");
    while(ch=getchar()){
        if(ch=='!'||ch=='.'||ch=='?'){
            terminator=ch;
            break;
        }
        sentence[i]=(char)ch;
        i++;
    }
    sentence[i]='\0';
    char revsentence[i+1];
    int p=0;
    int count=0;
    for(int j=i-1;j>=0;j--){
        count++;
        if(sentence[j]==' '){
            for(int k=0;k<=count;k++){
                revsentence[p]=sentence[j+k+1];
                p++;
            }
            count=0;
        }
    }
    revsentence[p]='\0';
    printf("%s",revsentence);
    return 0;
}
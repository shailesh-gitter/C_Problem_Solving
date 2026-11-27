#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#define WAIT_MS(ms) usleep((ms) * 1000)
int main(){
    char name1[50];
    char name2[50];
    char orig1[50];
    char orig2[50];
    printf("Enter the First Name:");
    scanf("%s",name1);
    printf("Enter the Second Name:");
    scanf(" %s",name2);
    int len1=strlen(name1);
    int len2=strlen(name2);
    for (int i = 0; i < len1; i++) {
        name1[i] = (char)toupper((unsigned char)name1[i]);
        orig1[i]=name1[i];
    }
    orig1[len1]='\0';
    for (int i = 0; i < len2; i++) {
        name2[i] = (char)toupper((unsigned char)name2[i]);
        orig2[i]=name2[i];
    }
    orig2[len2]='\0';
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(name1[i]==name2[j]){
                name1[i]=1;
                name2[j]=1;
                break;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < len1; i++) {
        if (name1[i] == 1) {
            printf("\033[9m%c\033[0m ", orig1[i]); 
        } else {
            printf("%c ", orig1[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < len2; i++) {
        if (name2[i] == 1) {
            printf("\033[9m%c\033[0m ", orig2[i]);
        } else {
            printf("%c ", orig2[i]);
        }
    }
    printf("\n\n");
    int count1=0;
    int count2=0;
    for(int i=0;i<len1;i++){
        if(isalpha(name1[i])>0){
            count1++;
        }
    }
    for(int i=0;i<len2;i++){
        if(isalpha(name2[i])>0){
            count2++;
        }
    }
    int tot_count=count1+count2;
    int rem=tot_count%6;
    printf("The Result is \n");
    printf("Loading");
    fflush(stdout);
    for (int cycle = 0; cycle < 3; cycle++) {       
        for (int dot = 0; dot < 3; dot++) {
            WAIT_MS(250);
            printf(".");
            fflush(stdout);
        }
        WAIT_MS(250);
        printf("\b\b\b   \b\b\b"); 
        fflush(stdout);
    }
    printf("\r\033[K"); 
    if(rem==0){
        printf("Friend\n");
    }
    else if(rem==1){
        printf("Lover\n");
    }
    else if(rem==2){
        printf("Affection\n");
    }
    else if(rem==3){
        printf("Marriage\n");
    }
    else if(rem==4){
        printf("Enemy\n");
    }
    else{
        printf("Sibling\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
int main(){
    char sentence[100];
    printf("Enter the Sentence:");
    if(scanf("%99[^\n]%*c",sentence)!=1){
        printf("No Input was provided!!");
        return 1;
    }
    int count_of_letters=0;
    int count_of_words=0;
    bool in_word=false;
    for(int i=0;sentence[i]!='\0';i++){
        if(!isspace((unsigned char)sentence[i])){
            count_of_letters++;
            if(!in_word){
                count_of_words++;
                in_word=true;
            }
        }
        else{
            in_word=false;
        } 
    }
    if (count_of_words == 0) {
        printf("No words detected!\n");
        return 0;
    }
    float average=(float)count_of_letters/count_of_words;
    printf("The Number of characters is %d\n",count_of_letters);
    printf("The Number of words is %d\n",count_of_words);
    printf("The average of characters per word is %.1f\n",average);
}
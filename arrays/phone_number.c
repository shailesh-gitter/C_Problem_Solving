#include<stdio.h>
#include<ctype.h>
int main(){
    char num[50];
    printf("Enter the Number:");
    if(scanf("%s",num)!=1){
        printf("Invalid Input!\n");
        return 1;
    }
    printf("The Number is %s\n",num);
    for(int i=0;num[i]!='\0';i++){
        if(isalpha(num[i])){
            switch (num[i])
            {
            case 'A': case 'B': case 'C':
            num[i]='2';
            break;
            
            case 'D': case 'E': case 'F':
            num[i]='3';
            break;
            
            case 'G': case 'H': case 'I':
            num[i]='4';
            break;
            
            case 'J': case 'K': case 'L':
            num[i]='5';
            break;
            
            case 'M': case 'N': case 'O':
            num[i]='6';
            break;
            
            case 'P': case 'Q': case 'R': case 'S':
            num[i]='7';
            break;
            
            case 'T': case 'U': case 'V':
            num[i]='8';
            break;
            
            case 'W': case 'X': case 'Y': case 'Z':
            num[i]='9';
            break;
            
            default:
            printf("Not a valid keypad letter\n");
            break;
           }
        }
    }
    printf("The Phone Number is:%s\n",num);
    return 0;
}
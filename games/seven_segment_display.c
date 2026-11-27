#include<stdio.h>
#include<ctype.h>
void display(int n);
int main(){
    int n;
    int dig;
    int k=0;
    int digit_array[10];
    printf("Enter Number:");
    while((dig=getchar())!='\n'&& dig!=EOF && k<9){
        if(isdigit(dig)){
            digit_array[k]=dig;
            k++;
        }
    }
    digit_array[k]='\n';
    printf("\n");
    for(int i=0;i<k;i++){
        display(digit_array[i]);
    }
    printf("\n");
    return 0;
}
char segmentarray[10][40]={"\u203E|\n |\n\u203E\u203E\u203E\n"," __\n   |\n|\u203E\u203E  \n \u203E\u203E\n",
                            "\u203E\u203E|\n\u203E\u203E|\n\u203E\u203E\n"};
void display(int n){
    printf("%s",segmentarray[n-1]);
}
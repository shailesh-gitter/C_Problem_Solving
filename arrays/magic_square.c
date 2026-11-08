#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    printf("This program creates a magic square of a specified size!!\n");
    printf("Enter the number only between 1 and 99!!\n");
    int num;
    printf("Enter the number:");
    if(scanf("%d",&num)!=1||num>99||num<1){
        printf("Invalid Input\n");
        return 1;
    }
    int magix[num][num];
    memset(magix, 0, sizeof(magix));
    int row=0;
    int col=(num/2);
    int sas=1;
    magix[row][col]=sas;
    sas++;
    for(int k=1;k<=num*num;k++){
        if(row==0&&col==num-1){
            row=num-1;
            col=0;
        }
        else if(col==num-1){
            col=0;
            row-=1;
        }
        else if(row==0){
            row=num-1;
            col+=1;
        }
        else{
            row-=1;
            col+=1;
        }
        if(isdigit(magix[row][col])!=0){
            row--;
        }
        magix[row][col]=sas;
        sas++;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%5d",magix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
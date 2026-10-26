#include<stdio.h>
int main(){
    int numarray[5][5];
    printf("Enter only 5 Numbers!\n");
    for(int i=0;i<5;i++){
        printf("Enter the Numbers in Row %d:",i+1);
        for(int j=0;j<5;j++){
            if(scanf("%d",&numarray[i][j])!=1)return 1;
        }
    }
    int sum_row=0;
    printf("The sum of the Rows      :");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum_row+=numarray[i][j];
        }
        printf("%4d",sum_row);
        sum_row=0;
    }
    printf("\n");
    int sum_coln=0;
    printf("The sum of the columns is:");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum_coln+=numarray[j][i];
        }
        printf("%4d",sum_coln);
        sum_coln=0;
    }
    printf("\n");
    return 0;
}
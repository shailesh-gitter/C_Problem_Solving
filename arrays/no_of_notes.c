#include<stdio.h>
int main(){
    int amount;
    printf("Enter the amount:");
    if(scanf("%d",&amount)!=1||amount<1||amount>99999){
        printf("Invalid Input\n");
        return 1;
    }
    int leftover=0;
    int count=0;
    while(amount>0){
        if(amount>=500){
            leftover=amount%500;
            count+=amount/500;
            amount=leftover;
        }
        else if(amount<500&&amount>=100){
            leftover=amount%100;
            count+=amount/100;
            amount=leftover;
        }
        else if(amount<100&&amount>=50){
            leftover=amount%50;
            count+=amount/50;
            amount=leftover;
        }
        else if(amount<50&&amount>=10){
            leftover=amount%10;
            count+=amount/10;
            amount=leftover;
        }
        else if(amount<10&&amount>=5){
            leftover=amount%5;
            count+=amount/5;
            amount=leftover;
        }
        else{
            count+=amount;
            amount=0;
        }
    }
    printf("The no of notes required is %d\n",count);
}
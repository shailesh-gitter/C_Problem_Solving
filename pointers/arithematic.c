#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2;
    int *num1,*num2;
    if(scanf("%d %d",&n1,&n2)!=2||n1<=(-10000)||n1>10000||n2<=(-10000)||n2>10000){
        return 1;
    }
    num1=&n1;
    num2=&n2;
    int sum,difference,product,quotient,remainder;
    sum=*num1 + *num2;
    difference=*num1 - *num2;
    product=(*num1)*(*num2);
    remainder=abs((*num1)%(*num2));
    quotient=(*num1)/(*num2);
    printf("%d %d %d %d %d",sum,difference,product,quotient,remainder);
    printf("\n");
    return 0;
}
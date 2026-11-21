#include<stdio.h>
#include<string.h>
void bmi(int* a,float* b,float* c,char* d);
int main(){
    int weight;float height;
    float bmia=0;
    char category[20];
    float* bmiz=&bmia;
    char* cat=category;
    int* w=&weight;
    float* h=&height;
    if(scanf("%d %f",w,h)!=2||*w<1||*w>300||*h<50||*h>250){
        return 1;
    }
    bmi(w,h,bmiz,cat);
    printf("The BMI is %.1f and The category is %s\n",bmia,category);
}
void bmi(int* a,float* b,float* c,char* d){
    *c=(float)*a/((*b/100)*(*b/100));
    if(*c<18.5){
        strcpy(d,"Underweight");
    }
    else if(*c<25){
        strcpy(d,"Normal");
    }
    else if(*c<30){
        strcpy(d,"overnight");
    }
    else{
        strcpy(d,"Obese");
    }
}
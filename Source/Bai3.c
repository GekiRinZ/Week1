#include<stdio.h>
void main(){
    float s;
    float cost;
    printf("Nhap quang duong di theo met: ");
    scanf("%f",&s);
    if(s<=1000){
        cost  = 10000;
    }
    else if(s<=30000&&s>1000){
        cost = 10000 + (s-1000)*7.5;
    }
    else{
        cost = 10000 + 29000*7.5 + (s-30000)*8;
    }
    printf("Gia tien: %.3f VND ", cost);
    getch();
}

#include<stdio.h>
void main(){
    int s;
    printf("\nNhap vao so phan tu toi da cua chuoi: ");
    scanf("%d",&s);
    char str[s];
    do{
        printf("\nNhap vao chuoi: ");
        fflush(stdin);
        gets(str);
        if(strlen(str)>s){
            printf("\nNhap lai chuoi thoa man dieu kien!");
        }
    }while(strlen(str)>s);
    strrev(str);
    printf("\nChuoi sau khi dao nguoc: %s",str);
    getch();
}

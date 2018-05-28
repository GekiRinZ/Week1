#include<stdio.h>
void main(){
    char s[100];
    printf("Nhap vao chuoi ky tu: ");
    gets(s);
    strrev(s);
    printf("\nChuoi sau khi dao nguoc: %s",s);
    getch();
}

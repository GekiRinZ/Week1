#include <stdio.h>

int main() {
    int x, a, b, c, temp;
    printf("Nhap so nguyen n co 3 chu so: ");
    scanf("%d", &x);
    a = x/100;
    b = ((x%100)/10);
    c = x%10;
    if(a<b){
        temp=a; a=b; b=temp;
    }
    if(b<c){
         temp=b; b=c; c=temp;
    }
    if(a<b){
        temp=a; a=b; b=temp;
    }
    printf("Cac so theo thu tu giam dan: %d %d %d", a, b, c);
    getch();
}

#include <stdio.h>

int main() {
    int n, a, b, c, temp;
    printf("Nhap so nguyen n(gom 3 chu so): ");
    scanf("%d", &n);
    a = n/100;
    b = ((n%100)/10);
    c = n%10;
    if(a>b)
     {
      temp=a;
      a=b;
      b=temp;
     }
    if(b>c)
     {
     temp=b;
     b=c;
     c=temp;
     }
    if(a>b)
     {
     temp=a;
     a=b;
     b=temp;
     }
    printf("%d%d%d", a, b, c);
}

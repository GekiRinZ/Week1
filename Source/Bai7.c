#include <stdio.h>

int main(){
    int a,b,uc,bc;
    do{
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    if(a==0&&b==0){
        printf("Nhap lai gia tri a va b khac 0.\n");
    }
    }while(a==0&b==0);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN(%d,%d)=%d\n",a,b,uc);
            break;
        }else if (a==0||b==0){
            printf("");
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN(%d,%d)=%d\n",a,b,bc);
            break;
        }
    }
    getch();
    return 0;
}

#include<stdio.h>
void main(){
    int d,m,y;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d%d%d",&d,&m,&y);
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
            if (d>=1&&d<=31){
                printf("");
                break;
            }
            else{
                printf("Khong hop le!");
                exit(0);
                break;
            }
        }
        case 4: case 6: case 9: case 11:{
            if (d>=1&&d<=30){
                printf("");
                break;
            }
            else{
                printf("Khong hop le!");
                exit(0);
                break;
            }
        }
        case 2:{
            if (d>=1&&d<=29){
                    if(((y % 4 == 0) && (y % 100!= 0) || (y%400 == 0))){
                        printf("%d la mot nam nhuan", y);
                        getch();
                        exit(0);
                        break;
                    }
                    else if(d == 29){
                        printf("Khong hop le!");
                        getch();
                        exit(0);
                        break;
                    }
            }
            else{
                printf("Khong hop le!");
                exit(0);
                break;
            }
        }
        default:{
            printf("Khong hop le!");
            exit(0);
            break;
        }
    }
    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0)){
        printf("%d la mot nam nhuan", y);
    }
    else{
        printf("%d khong phai la nam nhuan", y);
    }
    getch();
}

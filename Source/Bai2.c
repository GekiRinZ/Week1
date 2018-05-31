#include <stdio.h>

int main()
{
    int s;
    int chuthuong,chuhoa;
    int n;
    chuthuong=chuhoa=0;
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

    for(n=0;str[n]!=NULL;n++){

        if(str[n]>='A' && str[n]<='Z')
            chuhoa++;
        else if(str[n]>='a' && str[n]<='z')
            chuthuong++;
    }
    printf("Tat ca so ky tu in hoa la: %d",chuhoa);
    printf("\nTat ca so ky tu in thuong la: %d",chuthuong);
    getch();
}

#include <stdio.h>

int main()
{
    char str[100];
    int chuthuong,chuhoa;
    int n;
    chuthuong=chuhoa=0;
    printf("Nhap vao chuoi: ");
    gets(str);
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

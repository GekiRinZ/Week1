#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    int i,j;
    int smax;
    printf("\nNhap vao so phan tu toi da cua chuoi: ");
    scanf("%d",&smax);
    char s[smax];
    do{
        printf("\nNhap vao chuoi: ");
        fflush(stdin);
        gets(s);
        if(strlen(s)>smax){
            printf("\nNhap lai chuoi thoa man dieu kien!");
        }
    }while(strlen(s)>smax);
    //xoa dau cach o dau chuoi
    while (s[0]==' '){
        strcpy(&s[0],&s[1]);
    }
    //xoa dau cach o cuoi chuoi
    while (s[strlen(s)-1]==' '){
        strcpy(&s[strlen(s)-1],&s[strlen(s)]);
    }
    //chuyen chu cai dau tien thanh chu hoa
	if('a'<=s[0]&&s[0]<='z'){
		s[0]=s[0]-32;
	}
    //xoa cac dau cach canh nhau
    for(i=0; i<strlen(s); i++){
        if ((s[i]==' ')&&(s[i+1]==' ')){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
    }
    //xoa 2 dau cham phay lien nhau
    for(i=0;i<strlen(s)-1;i++){
		if(s[i]==','||s[i]=='.'){
			if(s[i+1]==','||s[i+1]=='.'){
				strcpy(&s[i],&s[i+1]);
				--i;
			}
		}
	}
	//xoa dau cach truoc dau cham hoac dau phay
    for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&(s[i+1]==','||s[i+1]=='.')){
			strcpy(&s[i],&s[i+1]);
		}
	}
	//them dau cach sau dau cham hoac dau phay
    for(i=0;i<strlen(s)-1;i++){
		if((s[i]==','||s[i]=='.')&&s[i+1]!=' '){
			for(j=strlen(s)+1;j>=i+2;j--){
				s[j]=s[j-1];
			}
			s[i+1]=' ';
		}
	}
    printf("Xau da chuan hoa : \"%s\"",s);
    getch();
}

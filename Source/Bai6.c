#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    int i,j;
    char s[255];
    printf("nhap s: ");
    gets(s);
    fflush(stdin);
    while (s[0]==' '){
        strcpy(&s[0],&s[1]);
    }
    while (s[strlen(s)-1]==' '){
        strcpy(&s[strlen(s)-1],&s[strlen(s)]);
    }
    for(i=0; i<strlen(s) ;i++){
        if ((s[i]==' ')&&(s[i+1]==' ')){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
    }
    for(i=0;i<strlen(s)-1;i++){
		if(s[i]==','||s[i]=='.'){
			if(s[i+1]==','||s[i+1]=='.'){
				strcpy(&s[i],&s[i+1]);
				--i;
			}
		}
	}
    for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&(s[i+1]==','||s[i+1]=='.')){
			strcpy(&s[i],&s[i+1]);
		}
	}
    for(i=0;i<strlen(s)-1;i++){
		if(s[i]==','||s[i]=='.'&&s[i+1]!=' '){
			for(j=strlen(s)+1;j>=i+2;j--){

				s[j]=s[j-1];
			}
			s[i+1]=' ';
		}
	}
    printf("Xau da chuan hoa : \"%s\"",s);
    getch();
}

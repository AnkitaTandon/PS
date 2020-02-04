#include<stdio.h>
#include<string.h>

void main(){
    char s[10][10];
    int len,n,i,x,y;

    scanf("%d",&n);             // n is the number of words

    for(i=0;i<n;i++){
        scanf("%s",s[i]);       //consecutive n lines containing n words with faded letters "."
    }

    for(i=0;i<n;i++){
        len=strlen(s[i]);
        for(x=0,y=len-1;y>=x;x++,y--){
            if(s[i][x]=='.' && s[i][y]!='.')
                s[i][x]=s[i][y];
            else if(s[i][x]!='.' && s[i][y]=='.')
                s[i][y]=s[i][x];
            else if(s[i][x]=='.' && s[i][y]=='.')
                s[i][y]=s[i][x]='a';
            else if(s[i][x]!=s[i][y]){
                s[i][0]=-1;  //error here
                break;        
            }
        }
    }

    for(i=0;i<n;i++){
        printf("\n%s",s[i]);
    }



}
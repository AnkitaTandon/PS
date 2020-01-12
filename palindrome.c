#include<stdio.h>
#include<string.h>

void main(){
    char s[10][10];
    int len,n,i,x,y;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",s[i]);
    }

    for(i=0;i<n;i++){
        len=strlen(s[i]);
        for(x=0,y=len-1;y>=x;x++,y--){
            if(s[i][x]=="." && s[i][y]!=".")
                s[i][x]=s[i][y];
            else if(s[i][x]!="." && s[i][y]==".")
                s[i][y]=s[i][x];
            else if(s[i][x]=="." && s[i][y]==".")
                s[i][y]=s[i][x]="a";
            else if(s[i][x]!=s[i][y]){
                s[i]=-1;
                break;        
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%s\n",s[i]);
    }



}
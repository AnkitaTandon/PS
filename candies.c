#include<stdio.h>

void main(){
    int day=0,n,m;
    scanf("%d%d",&n,&m);
    
    while(n!=0){
        day++;
        n--;
        if(day%m==0)
            n++;

    }
    printf("\n%d",day);
}
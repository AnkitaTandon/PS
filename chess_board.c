#include<stdio.h>

int popo(int r,int n){
    if(r<0)
        return 0;
    else
    {
        return ((n-r+1)*(n-r+1) + popo(r-2,n));
    }    
}

void main(){
    int i,t,n[100];

    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&n[i]);

    for(i=0;i<t;i++){
        if(n[i]%2==0)
            printf("\n%d",popo(n[i]-1,n[i]));
        else
        {
             printf("\n%d",popo(n[i],n[i]));
        }
    }                
}

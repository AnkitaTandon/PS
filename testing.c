#include<stdio.h>
#include<string.h>

int least( int a,int b, int c){
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;    
    else if(c<a && c<b)
        return c; 
    else
    {
        return a;
    }
    
}

void main(){
    int row,col,i,l,j,k,key,num[20][20],xy[10][2];
    char matrix[20][20];    
    scanf("%d%d%d",&row,&col,&k); printf("\n%d %d",row,col);
    
    for(i=1;i<=row;i++)
        for(j=1;j<=col;j++){
            scanf("%c",&matrix[i][j]);
           
             if(matrix[i][j]=='x')                                     
                    num[i][j]=0;
             else
                    num[i][j]=1; 
        }
    
    for(i=1;i<=k;i++)
            scanf("%d%d",&xy[i][1],&xy[i][2]);
    
    for(l=1;l<k;l++){
        num[xy[l][1]][xy[l][2]]=0;
        
        for(i=1;i<=row;i++){
            for(j=1;j<=col;j++){
                
                if(i!=1 && j!=1){
                    num[i][j]=num[i][j]+ least(num[i-1][j-1],num[i-1][j],num[i][j-1]);
                }

            }
        }
        key=num[0][0];
        for(i=1;i<=row;i++)
            for(j=1;j<=col;j++){
                if(num[i][j]>key)
                    key=num[i][j];
            }
        printf("\n%d",key);
    }        
    
}
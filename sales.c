#include<stdio.h>

void main(){
    int i,j,k,total=0,sum=0,c,n,prod[100][3];
    scanf("%d%d",&c,&n);

    for(i=0;i<n;i++){
        scanf("%d%d",&prod[i][0],&prod[i][1]);
        prod[i][2]=prod[i][1]-prod[i][0];
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(prod[i][2]<prod[j][2])
                for(k=0;k<3;k++){
                    prod[i][k]+=prod[j][k];
                    prod[j][k]=prod[i][k]-prod[j][k];
                    prod[i][k]-=prod[j][k];
                }
            else if(prod[i][2]==prod[j][2]){
                    if(prod[i][0]>prod[j][0])
                        for(k=0;k<3;k++){
                            prod[i][k]+=prod[j][k];
                            prod[j][k]=prod[i][k]-prod[j][k];
                            prod[i][k]-=prod[j][k];
                        }
            }    
        }       
    }
    for(i=0;i<n;i++)
        printf("\n%d %d %d",prod[i][0],prod[i][1],prod[i][2]);
    
    for(i=0;i<n;i++){
        if(sum+prod[i][0]<=c){
            sum+=prod[i][0];
            total+=prod[i][1];
        }
    }

    

    printf("\n%d",total);
}
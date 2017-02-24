#include<stdio.h>
#include<string.h>

int main(){
    int n,r,i,v[10001]={},retornado,aux;

    while(scanf("%d %d",&n,&r)!=EOF){
    	memset(v, 0, sizeof(v));
        retornado=0;
        for(i=0;i<r;i++){
            scanf("%d",&aux);
            v[aux]=1;
        }
        if(n==r){
            printf("*\n");
        }
        else{
            for(i=1;i<=n;i++){
                if(v[i]==0){
                    if(retornado==n-r-1){
                        printf("%d ",i);
                    }
                    else{
                        printf("%d ",i);
                    }
                    retornado++;
                }
                else{
                    v[i]=0;
                }
            }
        }
        if(n!=r){
            printf("\n");
        }
    }
return 0;
}
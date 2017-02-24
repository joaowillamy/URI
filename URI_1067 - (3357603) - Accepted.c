#include <stdio.h>

int main(){
    int i, j;
    
    
    scanf("%d", &i);
    
    if(i % 2 == 0){
    	i--;
	}
    
    for(j=1; j<=i; j+=2){
    	printf("%d\n",j);
	}
    
    
    return 0;
}
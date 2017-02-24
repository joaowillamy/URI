#include <stdio.h>

int main(){
    int i, j;
    
    
    scanf("%d", &i);
    
    if(i % 2 == 0){
    	i++;
	}
	
    
    for(j=0; j<6; j++){
    	
    	printf("%d\n",i);
    	i+=2;
	}
    
    
    return 0;
}
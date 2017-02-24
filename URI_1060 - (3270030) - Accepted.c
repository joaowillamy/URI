#include <stdio.h>
 
int main() {
 
    float va[6];
    int i, c = 0;
    
 	
 	
 	for (i = 0; i <6; i++){
 		scanf("%f", &va[i]);
	}
 	
 	for (i = 0; i <6; i++){
 		
		if(va[i] >= 0){
 				c++;
		}		
	}
	
	printf("%d valores positivos\n", c);
    return 0;
}
#include <stdio.h>
 
int main() {
 
    float va[6], m=0;
    int i, c = 0;
    
 	
 	
 	for (i = 0; i <6; i++){
 		scanf("%f", &va[i]);
	}
 	
 	for (i = 0; i <6; i++){
 		
		if(va[i] >= 0){
 				
				 c++;
				 m += va[i];
				 
		}		
	}
	m = m/c;
	printf("%d valores positivos\n", c);
	printf("%.1f\n", m);
    return 0;
}
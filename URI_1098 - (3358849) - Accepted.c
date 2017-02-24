#include <stdio.h>
#include <math.h>

int main(){
	int i , j;
	
	
	for( j=0; j<=20 ; j+=2){
		
		for(i=1; i<4; i++){
			if(j==0 || j==10 || j==20){
				printf("I=%.0f J=%.0f\n", (float)j/10 , (float)j/10 +i);
			}else{
				printf("I=%.1f J=%.1f\n", (float)j/10 , (float)j/10 +i);
			}
			
		}	
	}
	
	return 0;
}
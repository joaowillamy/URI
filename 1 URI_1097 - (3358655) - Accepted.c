#include <stdio.h>
#include <math.h>

int main(){
	int i , j, V[9][3], k=7;
	
	for( j=1; j<10 ; j+=2){
		for(i=0; i<3; i++ ){
			V[j][i]=k;	
			printf("I=%d J=%d\n", j, V[j][i]);
			k--;
		}
		k=8;
		k+=j;
	}
	
	return 0;
}

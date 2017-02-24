#include <stdio.h>
#include <math.h>

int main(){
	int i, N, X;
	
	scanf("%d", &N);

	for( i = 1; i<10000 ; i++){
		if(i%N==2){
			printf("%d\n",i);
		}
	}
	

	return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
	int i, N, X;
	
	scanf("%d", &N);

	for( i = 0; i<N; i++){
		scanf("%d",&X	);
		
		if(X != 0){
			
			if(X%2==0){
				printf("EVEN ");
			}else{
				printf("ODD ");
			}
			
			if(X>0){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");
			}
			
		}else{
			printf("NULL\n");
		}
	}
	

	return 0;
}
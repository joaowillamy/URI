#include <stdio.h>
#include <math.h>

int main(){
	int i, N, X;
	
	scanf("%d", &N);

	for( i = 1; i<=10 ; i++){
	X = N *i;
	printf("%d x %d = %d\n", i, N, X);
	}
	

	return 0;
}
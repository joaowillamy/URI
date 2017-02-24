#include <stdio.h>
#include <math.h>

int main(){
	int i, N;
	float a ,b, c, X;
	
	scanf("%d", &N);

	for( i = 0; i<N ; i++){
	scanf("%f %f %f", &a, &b , &c);
	X = (a*2 + b*3 + c*5)/10;
	printf("%.1f\n", X);
	}
	

	return 0;
}
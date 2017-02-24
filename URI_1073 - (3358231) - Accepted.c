#include <stdio.h>
#include <math.h>

int main(){
long long int i, n, calc;
	
	scanf("%lld", &n);
	if(n>5 && n<2000){
		
		if(n%2 == 0){
			n++;
		}
		
		for( i = 2; i<n; i+=2){
			calc = pow(i , 2);
			printf("%lld^2 = %lld\n", i, calc);
		}
	}
	

	return 0;
}
#include <stdio.h>

int main(){
	long int i, n, c=0;
	
	scanf("%d", &n);
	
	long int V[n];
	
	for( i = 0; i<n; i++){
		scanf("%ld", &V[i]);
		
		if(V[i]>= 10 && V[i] <= 20){
			c++;
		}
	}
	
	printf("%d in\n",c);
	printf("%d out\n",n-c);
	
	return 0;
}
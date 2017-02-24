#include <stdio.h>
#include <math.h>

int main(){
	int i, m = 0, N[100], p;
	
	for( i = 0; i<100 ; i++){
		scanf("%d", &N[i]);
		
		if(N[i]>m){
			m= N[i];
			p=i;
		}
		
	}
	printf("%d\n%d\n", m, p+1);

	return 0;
}
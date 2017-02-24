#include <stdio.h>
#include <math.h>

int main(){
    int A, B, x;

    scanf("%d %d", &A, &B );

	x = B - A;
	
	if(B - A < 0){
		x = 24 + B - A;
	}
	
	if(A == B){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S)\n", x);
	}
    return 0;
}











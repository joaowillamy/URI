#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, x;

    scanf("%lf %lf %lf", &A, &B, &C );

	if(A<B){
		x= A;
		A = B;
		B = x; 
	}
	if(B < C){
		x = B;
		B = C;
		C = x;
	}
	if(A < B){
		x = A;
		A = B;
		B = x;
	}
	
	if (A>=B+C){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		
		if(pow(A,2) == pow(B,2) + pow(C,2)){
			printf("TRIANGULO RETANGULO\n");
		}else{
			if(pow(A,2) > pow(B,2) + pow(C,2)){
				printf("TRIANGULO OBTUSANGULO\n");
			}	
			if(pow(A,2) < pow(B,2) + pow(C,2)){
				printf("TRIANGULO ACUTANGULO\n");
			}
			if( A== B && B == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			if( (A==B && A!=C) || (B==C && A!=C) ){
				printf("TRIANGULO ISOSCELES\n");
			}
			
		}
		
	}
	
	
	
    return 0;
}











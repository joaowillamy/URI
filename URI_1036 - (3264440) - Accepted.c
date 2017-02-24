#include <stdio.h>

int main(){
	double A ,B, C, d, R1, R2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	d = pow(B,2) - (4*A*C);
	
	if(A!=0 && d>=0){
		R1=((-B) + sqrt(d) )/ (A*2);
		R2=((-B) - sqrt(d) )/ (A*2);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}else{
		printf("Impossivel calcular\n");
	}
	
	
}
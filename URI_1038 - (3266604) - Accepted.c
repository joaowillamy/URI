#include <stdio.h>

int main(){
	int A=0, B=0;
	float t=0;
	
	
	scanf("%d %d", &A, &B);
	
	if(A==1){
		t = B * 4.0;
		printf("Total: R$ %.2f\n", t);
		
	}else if(A==2){
		t=B*4.50;
		printf("Total: R$ %.2f\n", t);
		
	}else if(A==3){
		t=B*5.00;
		printf("Total: R$ %.2f\n", t);
		
	}else if(A==4){
		t=B*2.0;
		printf("Total: R$ %.2f\n", t);
		
	}else if(A==5){
		t=B*1.5;
		printf("Total: R$ %.2f\n", t);
	}
	
	return 0;
}


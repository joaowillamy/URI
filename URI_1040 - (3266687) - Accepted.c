#include <stdio.h>

int main(){
	float N1, N2, N3, N4, m, Ne;
	
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	m = (2*N1 + 3*N2 + 4*N3 + N4)/10;
	
	printf("Media: %.1f\n", m);
	
	if( m>=7 ){
		printf("Aluno aprovado.\n");
		
	}else if(m<5){
		
		printf("Aluno reprovado.\n");
		
	}else if(m>=5 && m<=6.9){
		printf("Aluno em exame.\n");
		scanf("%f",&Ne);
		printf("Nota do exame: %.1f\n", Ne);
		m = (m+Ne)/2;
		if(m>=5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", m);	
		}else if(m<=4.9){
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", m);
		}
	}
	
	return 0;
}


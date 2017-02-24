#include <stdio.h>
#include <math.h>

int main(){
    int hi, hf, h, mi, mf, m;

    scanf("%d %d %d %d", &hi, &mi,&hf, &mf);
	
	h = hf - hi;
	
	if(hf - hi < 0){
		h = 24 + hf - hi;
	}
	
	m = mf - mi;
	if(mf - mi < 0){
		m = 60 + mf - mi;
		h--;
	}
	
	if(hi == hf && mi == mf){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	}
    return 0;
}











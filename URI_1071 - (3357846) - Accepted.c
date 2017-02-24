#include <stdio.h>

int soma(int X, int Y){
	int s=0;
	
	if(Y%2==0){
		Y++;
	}else{
		Y+=2;
	}
    while(X>Y){
    	s+= Y;	
    	Y+=2;
	}
	return s;
}

void p_soma(int X, int Y){
	if(X>Y){
		printf("%d\n",soma(X,Y));
	}else{
		printf("%d\n",soma(Y,X));
	}
}

int main(){
    int X, Y;
    
    scanf("%d %d" , &X , &Y );
	p_soma(X,Y);
	    
    return 0;
}
#include <stdio.h>

typedef struct ponto{
	int x,y;
}Ponto;

int main (){
	Ponto o,d;
	
	scanf("%d %d %d %d", &o.x, &o.y, &d.x, &d.y );
	
	while(o.x != 0 && o.y != 0 && d.x != 0 && d.y != 0){
		
		if(o.x == d.x && o.y == d.y){
			printf("0\n");
		}else if(o.x == d.x		||	 o.y == d.y  ||  o.x - o.y == d.x - d.y  ||  o.x + o.y == d.x + d.y ){
			printf("1\n");
		}else{
			printf("2\n");
		}
		scanf("%d %d %d %d", &o.x, &o.y, &d.x, &d.y );
	}
	
	return 0;
}
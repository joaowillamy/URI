#include <stdio.h>

int main(){
	int n, a = 0, m = 0, d=0;
	
	scanf("%d",&n);

	a = n/360;
	m = (n%365)/30;
	d = (n%365)%30;
	

	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",m);
	printf("%d dia(s)\n",d);
}
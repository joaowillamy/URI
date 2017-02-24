#include <stdio.h>
#include <math.h>

int main(){
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, n05 = 0, n025 = 0, n01 = 0, n005 = 0, n001 = 0;
	double d;

	scanf("%lf",&d);
	
	n100 = fmodf(d,100);
	n100 = (d - n100) / 100;
	d = d - n100*100;

	n50 = fmodf(d,50);
	n50 = (d - n50) / 50;
	d = d - n50*50;
	
	n20 = fmodf(d,20);
	n20 = (d - n20) / 20;
	d = d - n20*20;
	
	n10 = fmodf(d,10);
	n10 = (d - n10 ) / 10;
	d = d - n10*10;

	n5 = fmodf(d,5);
	n5 = (d - n5 ) / 5;
	d = d - n5*5;
	
	n2 = fmodf(d,2);
	n2 = (d -  n2) / 2;
	d = d - n2*2;
	
	n1 = fmodf(d,1);
	n1 = (d - n1 ) / 1;
	d = d - n1*1;
	
	d = d * 100;
	
	n05 = fmodf(d,50);
	n05 = (d -  n05) / 50;
	d = d - n05*50;
	
	n025 = fmodf(d,25);
	n025 = (d -  n025) / 25;

	d = d - n025*25;
	
	n01 = fmodf(d,10);
	n01 = (d -  n01) / 10;
	d = d - n01*10;

	n005 = fmodf(d,5);
	n005 = (d - n005 ) / 5;
	d = d - n005*5;
	
	n001 = d;
	
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n1);
	printf("%d moeda(s) de R$ 0.50\n", n05);
	printf("%d moeda(s) de R$ 0.25\n", n025);
	printf("%d moeda(s) de R$ 0.10\n", n01);
	printf("%d moeda(s) de R$ 0.05\n", n005);
	printf("%d moeda(s) de R$ 0.01\n", n001);
	
	return 0;
	
}
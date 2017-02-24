#include <stdio.h>
 
int main() {
 
char nome[10];
double A,B, C;

scanf("%s %lf %lf", &nome, &A, &B);

C = B*0.15 + A;

printf("TOTAL = R$ %.2lf\n", C);


    return 0;
}
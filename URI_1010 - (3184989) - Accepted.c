#include <stdio.h>
 
int main() {
 
  int cod1, n1, cod2, n2;
  float vu1, vu2, vp;
    scanf("%d %d %f", &cod1, &n1, &vu1);
    scanf("%d %d %f", &cod2, &n2, &vu2);
vp = (n1*vu1)+(n2*vu2);
printf("VALOR A PAGAR: R$ %.2f\n", vp);

    return 0;
}
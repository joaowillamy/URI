#include <stdio.h>
 
int main() {
 
    int X;
    double Y,k;

    scanf("%d %lf", &X, &Y);
    k = X/Y;

    printf("%.3lf km/l\n", k);
    return 0;
}
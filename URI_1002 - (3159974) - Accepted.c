#include <stdio.h>
 
int main() {
 
    
    double area;
    double raio;
   
    area = 1;
    raio = 1;
    scanf("%lf", &raio);

    area =  3.14159 * pow(raio,2);

    printf("A=%.4lf\n", area);
 
    return 0;
}
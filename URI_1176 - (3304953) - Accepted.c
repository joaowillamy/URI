#include <stdio.h>
 
int main(){
     
    long long int T[61]; 
	int i, n, k, z;
     
   
     
    T[0] = 0;
    T[1] = 1;
     
    for (i=2; i<=60; i++){
         
        T[i] = T[i - 1] + T[i - 2];
    }   
    
	scanf("%d", &k);
	  
    for( z = 0; z<k; z++){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n",n , T[n]);
    }
    return 0;
}
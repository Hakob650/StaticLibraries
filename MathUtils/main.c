#include <stdio.h>
#include "mathutils.h"
int main(){
    int n=5;
    int a=48,b=18;
    
    printf("Factorial of %d: %lu\n",n,factorial(n));
    
    printf("Fibbonaci at position %d: %lu\n",n,fibbonaci(n));
    
    printf("GCD of %d and %d: %d\n",a,b,gcd(a,b));
    
    printf("%d is %s\n",n,prime_check(n) ? "prime":"not prime");

    return 0;
}


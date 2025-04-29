#include <stdio.h>
unsigned long factorial(int n){
    unsigned long res=1;
        for(int i=1;i<=n;++i){
            res*=i;
        }return res;
}

#include <stdio.h>
unsigned long fibbonaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    unsigned long a=0,b=1,res;
    for(int i=2;i<=n;++i){
        res=a+b;
        a=b;
        b=res;
    }return res;
}

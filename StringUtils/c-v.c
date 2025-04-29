#include <stdio.h>
int str_count_vowels(const char *str){
    if(str==NULL){
        return 0;
    }
    int count=0;
    while(*str){
        char ch=*str|32;
        if(ch>='a' && ch<='z'){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                             count++;
            }
        }str++;
    }return count;
}



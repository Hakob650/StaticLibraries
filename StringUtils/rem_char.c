#include <stdio.h>
void str_remove_char(char *str,char c){
    if(str==NULL){
        return ;
    }
    char *src=str,*dst=str;
    while(*src){
        if(*src!=c){
            *dst++=*src;
        }src++;
    }*dst='\0';
}
        

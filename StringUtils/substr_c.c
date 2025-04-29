#include <string.h>
#include <stdio.h>
int str_substring_count(const char *str,const char *substr){
    if(str==NULL || substr==NULL){
        return 0;
    }
    int count=0;
    const char *tmp=str;
    while((tmp=strstr(tmp,substr))!=NULL){
        count++;
        tmp++;
    }return count;
}


#include <string.h>
int str_is_palindrome(const char *str){
    if(str==NULL){
        return 0;
    }
    int left=0;
    int right=strlen(str);
    if(right==0){
        return 1;
    }right--;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }return 1;
}

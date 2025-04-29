#include <stdio.h>
#include "mystring.h"
int main(){
    char text[]="hello world";

    printf("Is %s a palindrome? %s\n",text,str_is_palindrome(text) ? "YES":"NO");
    printf("Count of 'l':  %d\n",str_substring_count(text,"l"));
    str_remove_char(text,'l');
    printf("After removing 'l': %s\n",text);
    printf("Vowel count: %d\n",str_count_vowels(text));

    return 0;
}



#include <stdio.h>

char* strStr(char* str1, char* str2) {
    int index=0;
    int i=0;
    while(*(str1+index)){
        i=0;
        if(*(str1+index)==*(str2)){
            while(*(str1+index+i)==*(i+str2)){
                ++i;
                if(!*(str2+i)){
                    return str1+index;
                }
           }
        }
         ++index;
    }
    return NULL;
}

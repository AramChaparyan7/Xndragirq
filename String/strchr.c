#include <stdio.h>

char* my_strchr(char *str,char c){
	while(*str){
		if(*str==c){
			return str;
		}
		++str;
	}
	return NULL;
}

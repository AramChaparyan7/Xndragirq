#include <stdio.h>
#include "head.h"

int main(){
	char str[]="Hello ";
	printf("%d\n",my_strlen(str));
	char c='o';
	printf("%c\n",*my_strchr(str,c));
	char str2[]="World";
	my_strcat(str,str2);
	printf("%s\n",str);
	printf("%s\n",my_strcpy(str,str2));
	char str3[]="or";
	printf("%s\n",strstr(str,str3));
	return 0;
}

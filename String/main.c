#include <stdio.h>
#include "head.h"

int main(){
	char str1[]="Hello ";
	printf("%d\n",my_strlen(str1));
	char c='e';
	printf("%c\n",*my_strchr(str1,c));
	char str2[]="World";
	my_strcat(str1,str2);
	printf("%s\n",str1);
	printf("%s\n",my_strcpy(str1,str2));
	char str3[]="or";
	printf("%s\n",strstr(str1,str3));
	char str4[]="hELLO";
	title(str4);
	printf("%s\n",str4);
	capital(str1);
	printf("%s\n",str1);
	return 0;
}

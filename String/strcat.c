void my_strcat (char* str1,const char *str2){
	while(*str1){
		++str1;
	}
	while(*str2){
		*str1=*str2;
		++str1;
		++str2;
	}
	*str1='\0';
}

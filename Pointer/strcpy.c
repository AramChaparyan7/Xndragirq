char* my_strcpy(char *str1,const char *str2){
	char *res=str1;
	while(*str2){
		*str1=*str2;
		str1++;
		str2++; 
	}
	*str1='\0';
	return res;
}

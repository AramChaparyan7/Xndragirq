void capital(char *str){
	if(!*str){
		return;
	}
	while(*str){
		*str&=(~32);
		++str;
	}
}

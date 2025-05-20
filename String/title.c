void title(char *str){
	if(!*str){
		return;
	}
	str[0]&=(~32);
	++str;
	while(*str){
		*str|=32;
		++str;
	}
}

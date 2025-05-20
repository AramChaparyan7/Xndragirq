char capital(char *str){
	if(!*str){
		return 0;
	}
	if(*str<'Z' && *str >'A'){
		return *str;
	}
	return capital(str+1);
}

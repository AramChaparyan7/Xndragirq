int str_len(char *str){
	if(!*str){
		return 1;
	}
	return 1+str_len(str+1);
}

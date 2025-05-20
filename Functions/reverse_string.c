char *reverse_string(char*str){
	int size=0;
	while(str[size]){++size;}
	for(int i=0;i<size/2;++i){
		char tmp=str[i];
		str[i]=str[size-i-1];
		str[size-i-1]=tmp;
	}
	return str;
}

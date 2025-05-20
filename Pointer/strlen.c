int my_strlen(const char* str){
	int size=0;
	while(*str){
		++size;
		++str;
	}
	return size;
}

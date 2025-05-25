#include <stdio.h>

int main(){
	char buf=0;
	int line=0;
	int word=0;
	int size=0;
	FILE* f=fopen("stream","r+");
	while (fread(&buf,sizeof(char),1,f)){
		if(buf=='\n'){
			++line;
			++word;
		}else if(buf==' ') {
			++word;
		}
		++size;
	}
	printf("size is %d\n",size);
	printf("number of is words %d\n",word);
	printf("number of is lines %d\n",line);
	fclose(f);
	return 0;
}

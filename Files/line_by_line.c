#include <stdio.h>

int main(){
	char buffer[512]={};
	char buf=0;
	int i=0;
	FILE* f=fopen("stream","r+");
	while (fread(&buf,sizeof(char),1,f)){
		if(buf=='\n'){
			buffer[i]='\0';
			printf("%s\n",buffer);
			i=0;
		}else{
			buffer[i]=buf;
			++i;
		}
	}
	fclose(f);
	return 0;
}

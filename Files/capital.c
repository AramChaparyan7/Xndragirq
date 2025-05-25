#include <stdio.h>

int main(){
	char buffer=0;
	FILE* f=fopen("stream","r+");
	int a=0;
	while (fread(&buffer,sizeof(char),1,f)){
		if(buffer<='Z' && buffer>='A'){
			buffer|=32;
		}
		fseek(f,-1,SEEK_CUR);
		fwrite(&buffer,sizeof(char),1,f);
	}
	fclose(f);
	return 0;
}

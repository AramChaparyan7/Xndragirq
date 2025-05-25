#include <stdio.h>

int main(){
	char buffer=0;
	FILE* f=fopen("stream","r+");
	int res=0;
	while (fread(&buffer,sizeof(char),1,f)){
		if(buffer<='9' && buffer>='1'){
			++res;
		}
	}
	printf("%d\n",res);
	fclose(f);
	return 0;
}

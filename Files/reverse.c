#include <stdio.h>

int main(){
	FILE *a=fopen("a.txt","r");
	FILE *b=fopen("b.txt","w");
	fseek(a,-1,SEEK_END);
	char buffer=0;
	int i=ftell(a);
	while(i>=0){
		fseek(a,i,SEEK_SET);
		fread(&buffer,sizeof(char),1,a);
		fwrite(&buffer,sizeof(char),1,b);
		--i;
	}
	fclose(b);
	fclose(a);
	return 0;
}

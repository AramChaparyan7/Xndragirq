#include <stdio.h>

int main(){
	FILE* f=fopen("stream","r+");
	int a=0;
	int b=0;
	printf("where to read\n");
	scanf("%d",&a);
	printf("how much to read\n");
	scanf("%d",&b);
	fseek(f,a,SEEK_SET);
	char buffer[512]={};
	fread(buffer,sizeof(char),b,f);
	printf("%s\n",buffer);
	fseek(f,a,SEEK_SET);
	fread(buffer,sizeof(char),b,f);
	printf("%s\n",buffer);
	fclose(f);
	return 0;
}

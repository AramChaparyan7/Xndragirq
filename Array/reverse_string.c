#include <stdio.h>
#define SIZE 50


int main(){
	char str[SIZE]={};
	scanf("%s",str);
	int size=0;
	while(str[size]){++size;}
	for(int i=0;i<size/2;++i){
		char tmp=str[i];
		str[i]=str[size-i-1];
		str[size-i-1]=tmp;
	}
	printf("%s\n",str);
	return 0;
}

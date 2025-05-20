#include <stdio.h>

int main(){
	int a=0;
	scanf("%d",&a);
	char x[10]={};
	int i=0;
	while(a>0){
		if(a%16<10){
			x[i]=a%16+'0';
		}else{
			x[i]=a%16-10+'A';
		}
		a/=16;
		++i;
	}
	while(i--){
		printf("%c",x[i]);
	}
	printf("\n");
	return 0;
}

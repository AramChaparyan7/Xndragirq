#include <stdio.h>

void binary(int n){
	char arr[100]={};
	int i=0;
	while(n>0){
		arr[i]=n%2;
		n/=2;
		++i;
	}
	while(i--){
		printf("%d",arr[i]);
	}
	printf("\n");
}

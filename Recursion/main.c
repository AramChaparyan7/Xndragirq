#include <stdio.h>
#include "head.h"

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",arr_max(arr,10));
	int n=0;
	scanf("%d",&n);
	printf("%d\n",sum(n));
	scanf("%d",&n);
	printf("%llu\n",fact(n));
	char str[]="hello World";
	printf("%d\n",str_len(str));
	printf("%c\n",capital(str));
	scanf("%d",&n);
	int *p=bin_srch(arr,0,10,n);
	if(p){
		printf("%d\n",*p);
	}
	return 0;
}

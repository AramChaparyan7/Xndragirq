#include <stdio.h>
#include "head.h"
#define SIZE 100

int main(){
	int n=0;
	scanf("%d",&n);
	printf("%d\n",armstrong(n));
	printf("%d\n",reverse(n));
	printf("%d\n",ones_count(n));
	printf("%d\n",my_sqrt(n));
	printf("%d\n",fibonachi(n));
	binary(n);
	char str[SIZE]={};
	scanf("%s",str);
	reverse_string(str);
	printf("%s\n",str);
	return 0;
}

#include <stdio.h>

int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	int* tmp1=&a;
	int *tmp2=&b;
	*tmp1^=*tmp2;
	*tmp2^=*tmp1;
	*tmp1^=*tmp2;
	printf("%d %d\n",a,b);
	return 0;
}

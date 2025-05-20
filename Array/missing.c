#include <stdio.h>
#include <stdlib.h>

int main(){
	int size=0;
	printf("input size\n");
	scanf("%d",&size);
	int *arr=(int*)malloc(sizeof(int)*(size-1));
	printf("input 10 numbers\n");
	for(int i=0;i<size-1;++i){
		scanf("%d",arr+i);
	}
	int sum=0;
	for(int i=0;i<size-1;++i){
		sum+=arr[i];
	}
	int res=(size+1)*size/2-sum;
	printf("%d\n",res);
	return 0;
}

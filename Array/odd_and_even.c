#include <stdio.h>
#define SIZE 10


int main(){
	int arr[SIZE]={};
	printf("input 10 numbers\n");
	for(int i=0;i<SIZE;++i){
		scanf("%d",&arr[i]);
	}
	int even=0;
	for(int i=0;i<SIZE;++i){
		if(arr[i]%2==0){
			int tmp=arr[i];
			arr[i]=arr[even];
			arr[even]=tmp;
			++even;
		}
	}
	for(int i=0;i<SIZE;++i){
		printf("%d ",arr[i]);
	}
	return 0;
}

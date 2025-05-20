#include <stdio.h>
#define SIZE 9

int main(){
	int arr[SIZE]={};
	printf("input 9 numbers\n");
	for(int i=0;i<SIZE;++i){
		scanf("%d",arr+i);
	}
	int res=0;
	for(int i=0;i<SIZE;++i){
		res^=arr[i];
	}
	printf("%d\n",res);
	return 0;
}

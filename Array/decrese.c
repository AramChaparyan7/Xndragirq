#include <stdio.h>
#define SIZE 10


int main(){
	int arr[SIZE]={};
	printf("input 10 numbers\n");
	for(int i=0;i<SIZE;++i){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<SIZE-1;++i){
		if(arr[i]<arr[i+1]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

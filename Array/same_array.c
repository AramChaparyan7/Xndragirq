#include <stdio.h>
#define SIZE 10


int main(){
	int arr1[SIZE]={};
	int arr2[SIZE]={};
	printf("input 10 numbers\n");
	for(int i=0;i<SIZE;++i){
		scanf("%d",arr1+i);
	}
	printf("input 10 numbers\n");
	for(int i=0;i<SIZE;++i){
		scanf("%d",arr2+i);
	}
	for(int i=0;i<SIZE;++i){
		if(arr1[i]!=arr2[i]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

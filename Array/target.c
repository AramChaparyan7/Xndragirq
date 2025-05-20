#include <stdio.h>
#define SIZE 10

int main(){
	int target=0;
	printf("input target\n");
	scanf("%d",&target);
	printf("input 10 elements\n");
	int arr[SIZE]={};
	int res=-1;
	for(int i=0;i<SIZE;++i){
		scanf("%d",arr+i);
		if(arr[i]==target){
			res=i;
		}
	}
	printf("%d\n",res);
	return 0;
}

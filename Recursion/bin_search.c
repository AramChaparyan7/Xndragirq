#include <stdio.h>

int *bin_srch(int *arr,int left,int right,int target){
	if(left>right){
		return NULL;
	}
	int mid=(left+right)/2;
	if(arr[mid]<target){
		return bin_srch(arr,mid+1,right,target);
	}
	if(arr[mid]>target){
		return bin_srch(arr,left,mid-1,target);
	}
	return arr+mid;
}

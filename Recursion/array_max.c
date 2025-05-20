int arr_max(int *arr,const int size){
	if(size==1){
		return arr[0];
	}
	int res=arr[0];
	int h=arr_max(arr+1,size-1);
	res=res>h?res:h;
}

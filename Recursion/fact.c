long long fact(int n){
	if(n<0){
		return -1;
	}
	if(n<2){
		return n;
	}
	return n*fact(n-1);
}

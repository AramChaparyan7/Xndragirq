int reverse(int num){
	int res=0;
	while(num>0){
		res*=10;
		res+=num%10;
		num/=10;
	}
	return res;
}

int fibonachi(int num){
	int a=1,b=1;
	for(int i=1;i<num;++i){
		int tmp=b;
		b=a+b;
		a=tmp;
	}
	return a;
}

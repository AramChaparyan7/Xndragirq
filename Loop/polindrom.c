#include <stdio.h>

int main(){
	int n=0;
	scanf("%d",&n);
	int b=1;
	while(b<=n){
		b*=10;
	}
	b/=10;
	while(n>0){
		if(n%10!=n/b){
			printf("NO\n");
			return 0;
		}
		n=n%b;
		n/=10;
		b/=100;
	}
	printf("YES\n");
	return 0;
}

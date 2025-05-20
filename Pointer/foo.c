#include <stdio.h>

void foo(int target,char c1,char c2,short sh){
	char* cp1=(char*)&target;
	char *cp2=(char*)&target+1;
	short *shp=(short*)&target+2;
	*cp1=c1;
	*cp2=c2;
	*shp=sh;
	printf("%d\n",target);
}

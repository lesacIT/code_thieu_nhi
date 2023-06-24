#include <stdio.h>

int main(){
	unsigned n,i,Fi,Fi1,Fi2;
	
	printf("Nhap n(n<40):");
	scanf("%ld",&n);
	
	
	Fi=Fi1=Fi2=1;
	for(i=3;i<=n;++i){
		Fi=Fi1+Fi2;
		Fi1=Fi2;
		Fi2=Fi;
	}
	printf("Fi(%u)=%u\n",n,Fi);
	return 0;
}

#include <stdio.h>

int main(){
	unsigned n,k,i,count;
	
	printf("Nhap n: ");
	scanf("%u",&n);
	
	k=2;
	count=0;
	while(count<n){
		for(i=2;i*i<=k;++i)
			if(k%i==0)break;
		if(i*i>k){
			printf("%u ",k);
			count++;
		}
		k++;
	}
	putchar('\n');
	return 0;
}

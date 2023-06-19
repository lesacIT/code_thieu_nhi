#include <stdio.h>

int main(){
	unsigned n,i,cout, sum;
	
	printf(" nhap n: ");
	scanf("%u",&n);
	
	printf("cac uoc so: ");
	for(cout=sum=0,i=1;i<= n;++i)
		if(n%i==0){
			printf("%u ",i);
			cout++;
			sum+= i;
		}
	printf("\n co %u uoc so, tong la: %u\n",cout,sum);
	return 0;
}

#include <stdio.h>

int isPrime(unsigned k){
	unsigned i;
	if(k==2)return 1;
	if(k<2||k%2==0)return 0;
	for(i=3;i<(k>>1);i+=2)
		if(k%i==0)return 0;
	return 1;
}

int main(){
	unsigned n;
	
	printf("Nhap n: ");
	scanf("%u",&n);
	
	if(isPrime(n))
		printf("%u la so nguyen to\n",n);
	else{
		printf("%u khong la so nguyen to\n",n);
		unsigned i;
		for(i=n-1;i>=2;--i)
			if(isPrime(i)){
				printf("So nguyen to be hon gan nhat: %u\n",i);
				break;
			}
	}
	return 0;
}

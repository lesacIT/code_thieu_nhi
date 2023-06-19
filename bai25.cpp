#include <stdio.h>

int main(){
	unsigned long n,t;
	unsigned u,sum=0,cout=0;
	
	printf("nhao n: ");
	scanf("%lu",&n);
	t=n;
	
	do{
		cout++;
		sum+=(u=t%10);
	}while(t /=10);
	printf("%lu co %u chu so\n",n,cout);
	printf("chu so cuoi cung la: %lu\n",n%10);
	printf("chu so dau tien la: %u\n",u);
	printf("tong cac chu so la: %u\n",sum);
	do t=t*10+n%10;while(n/=10);
	printf("so dao nguoc la: %u\n",t);
	return 0;
}

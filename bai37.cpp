#include <stdio.h>

int main(){
	unsigned n, m,s;
	
	do{
		printf("Nhap n: ");
		scanf("%u",&n);
	}while(!n && printf("Error: n>0\n"));
	
	s=0;
	m=1;
	while(s+m<n){
		printf("%u",m);
		s += m++;
		if(s+m<n)printf("+");
	}
	if(s){
		printf("=%u<%u\n",s,n);
		printf("m=%u\n",m-1);
	}else printf("khong tim thay\n");
	return 0;
}

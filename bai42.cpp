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
	unsigned p[200],i,n,count;
	unsigned x,y,z;
	
	for(n=0,i=2;i<1000;++i)
		if(isPrime(i)) p[n++]=i;
	
	printf("Co %u so nguyen to n (5<n<1000)\n",n-3);
	for(count =0,i=3;i<n;++i){
		for(x=0;x<i;++x)
			for(y=x;y<i;++y)
				for(z=i;z>y;--z)
					if(p[i]==p[x]+p[y]+p[z]){
						printf("%3u=%u+%u+%u\n",p[i],p[x],p[y],p[z]);
						count++;
						goto checked;
						
					}
		checked:{}
	}
	printf("Da kiem tra %u so nguyen to\n",count);
	return 0;
}

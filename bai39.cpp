#include <stdio.h>

int main(){
	unsigned a,b,c;
	
	for(a=1;a<100;++a)
		for(b=1;b<100;++b)
			for(c=1;c<100;++c)
				if(a*a+b*b==c*c){
					if(b-a==1&&c-b==1)
						printf("(%u,%u,%u):ba so nguyen lien tiep\n",a,b,c);
					if(b%2==0&&b-a==2&&c-a==2)
						printf("(%u,%u,%u):ba so chan lien tiep\n",a,b,c);
				}
	return 0;
}

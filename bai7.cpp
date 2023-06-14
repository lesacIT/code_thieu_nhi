#include <stdio.h>


int main(){
	float a,b;
	
	printf("nhap a,b: ");
	scanf("%f%f",&a,&b);
	if(!a)printf(b ? "vo nghiem\n" :"vo dinh\n");
	else printf("x=%g\n",-b/a);
	
	return 0;
}

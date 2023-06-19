#include <stdio.h>
#include <math.h>
#define eps 1e-6

double f(double x){
	return pow(sin(x),2)*cos(x);
}

double inter(double a,double b,unsigned n){
	unsigned i;
	double h=(b-a)/n;
	double t=0.5*(f(a)+f(a+n*h));
	for(i=1;i<n;++i)
		t +=f(a+i*h);
	return t*h;
}

int main(){
	unsigned n=10;
	double a=0;
	double b=1.5708;
	double t,t1;
	
	t1=inter(a,b,n);
	do{
		t=t1;
		n *=2;
		t1=inter(a,b,n);
	}while(fabs(t1-t)/3>eps);
	
	printf("Ket qua : %lf\n",t1);
	printf("Doi chung: %lf\n",pow(sin(b),3)/3);
	return 0;
}

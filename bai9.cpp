#include <stdio.h>
#include <math.h>

int main(){
	double angle; 
	
	printf("nhap so do x cua goc (phut): ");
	scanf("%lf",&angle);
	
	angle /=60;
	printf("x thuoc goc thu %d\n",(int)ceil(angle/90)%4);
	printf("cos(x)=%g\n",cos(angle *M_PI/180));
	return 0;
}

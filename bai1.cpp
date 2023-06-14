// nhap vao dien tich s cua mat cau .tinh the tich v cua hinh cau nay

#include <stdio.h>
#include <math.h>

int main(){
	double S;
	
	printf("nhap dien tich S: ");
	scanf("%lf", &S);
	printf("The tich V= %g\n",
	 (4* M_PI * pow(sqrt( S / (4* M_PI)),3)) /3 );
	
	return 0;
}

/*
B�i 3: Vi?t chuong tr�nh nh?p v�o t?a d? (xC, yC) l� t�m c?a m?t du?ng tr�n, v� R
l� b�n k�nh c?a du?ng tr�n d�. Nh?p v�o t?a d? (xM, yM) c?a di?m M. X�c d?nh di?m
M n?m trong, n?m tr�n hay n?m ngo�i du?ng tr�n
*/
#include <stdio.h>

int main(){
	double xC,yC,R,xM,yM,d;
	
	printf("nhap toa do tam C(xC,yC)? ");
	
	scanf("%lf%lf",&xC,&yC);
	printf("nhap ban kinh R? ");
	scanf("%lf",&R);
	printf("nhap toa do M(xM, yM)? ");
	scanf("%lf%lf",&xM,&yM);
	
	d=R * R -((xM-xC)*(xM-xC)+(yM -yC)*(yM-yC));
	if(d>0)printf("M nam trong C()\n");
	else if(d<0)printf("M nam ngoai C()\n");
		else printf("M nam tren C()\n");
	
	return 0;
}

/*
Bài 3: Vi?t chuong trình nh?p vào t?a d? (xC, yC) là tâm c?a m?t du?ng tròn, và R
là bán kính c?a du?ng tròn dó. Nh?p vào t?a d? (xM, yM) c?a di?m M. Xác d?nh di?m
M n?m trong, n?m trên hay n?m ngoài du?ng tròn
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

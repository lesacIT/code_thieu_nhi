//bai 2 nhap vao toa do 2 diem A(xa,yA) và N(xb,yB).Tinh khoang cach
 #include <stdio.h>
 #include <math.h>
 
 int main(){
 	float xA, yA,xB,yB;
 	
 	printf("A(xA,yA)? ");
 	scanf("%f%f",&xA,&yA);
 	printf("B(xB,yB)?");
 	scanf("%f%f",&xB,&yB);
 	printf("|AB| = %g\n",
 	 sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA)));
 	 
 	return 0;
 }

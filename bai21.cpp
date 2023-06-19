#include <stdio.h>

int main(){
	float sd, d1, d2,d3;
	char zone;
	unsigned beneficiary;
	
	printf("nhap diem chuan: ");
	scanf("%f",&sd);
	printf(" nhap diem 3 mon thi: ");
	scanf("%f%f%f",&d1,&d2,&d3);
	while(getchar()!='\n'){}
	printf("nhap khu vuc (A,B,C,X):");
	scanf("%c",&zone);
	printf("nhap doi tuong (1,2,3,0):");
	scanf("%u",&beneficiary);
	
	if(d1*d2*d3){
		float d=d1+d2+d3;
		switch(zone){
			case 'A': d+=3;break;
			case 'B': d+=1;break;
			case 'C': d+=0.5;
		}
		switch(beneficiary){
			case 1: d+=2.5;break;
			case 2: d+=1.5;break;
			case 3: d+=1;
		}
		printf("%s [%g]\n",d>=sd?"Dau":"Rot",d);
	}
	else printf("Rot (co mon diem 0)\n");
	return 0;
}

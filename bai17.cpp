#include <stdio.h>

int main(){
	unsigned y,m,dow,s,i,p,top,d;
	
	printf("nhap nam: ");
	scanf("%u",&y);
	printf("nhap thu cho ngay dau tien cua nam: ");
	scanf("%u",&dow);
	printf("nhap thang: ");
	scanf("%u",&m);
	
	s=0;
	for(i=1;i<=m;++i,s +=top)
		switch(i){
			case 4 :case 6: case 9: case 11: top=30;break;
			case 2: top=28+((y%4==0 && y%100)||y%400==0);break;
			default: top=31;
		}
	
	s -= top;
	
	for(p=0,i=dow;i < s + dow;++i)
	
		if(i%7)p=(p+1)%5;
	
	dow=i%7;
	printf(" Sun Mon Tue Wen Thu Fri Sar\n");
	for(d=1;d<dow;++d)
		printf("%7c",' ');
	for(d=0;d<=top;++d){
		printf("%3u",d);
		if((dow+d-1)%7)	{
			printf("[%c]",p["ABCDE"]);
			p=(p+1)%5;
		}else printf(" [ ]");
		if((dow +d)%7==0) putchar('\n');
	}
	if((dow + top)%7) putchar('\n');
	return 0;
}

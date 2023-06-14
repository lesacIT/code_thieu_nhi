/* 
Bài 6: Vi?t chuong trình nh?p vào ba s? nguyên. Hãy in ba s? này ra màn hình theo
th? t? tang d?n và ch? dùng t?i da m?t bi?n ph?
*/
#include <stdio.h>

int main(){
	int a,b,c,t;
	
	printf("nhap a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	if(a<c){
		t=a;
		a=c;
		c=t;
	}
	if(b<c){
		t=b;
		b=c;
		c=t;
	}
	printf("tang dan: %d %d %d\n",c,b,a);
	return 0;
}


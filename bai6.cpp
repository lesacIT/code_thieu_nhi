/* 
B�i 6: Vi?t chuong tr�nh nh?p v�o ba s? nguy�n. H�y in ba s? n�y ra m�n h�nh theo
th? t? tang d?n v� ch? d�ng t?i da m?t bi?n ph?
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


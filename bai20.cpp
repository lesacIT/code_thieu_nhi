#include <stdio.h>

int main(){
	unsigned kw;
	unsigned long money;
	
	printf("nhap so kW tieu thu: ");
	scanf("%u",&kw);
	
	money=kw*500;
	
	if(kw>100) money +=(kw-100)*300;
	
	if(kw>250) money +=(kw-250)*200;
	
	if(kw>350) money +=(kw-350)*500;
	
	printf("chi phi: %lu\n",money);
	return 0;
}

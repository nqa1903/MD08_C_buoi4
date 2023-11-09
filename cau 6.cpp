#include <stdio.h>

int main(){
	int a , b ,c ;
	printf("nhap 3 so a b c :");
	scanf("%d %d %d", &a , &b , &c);
	if(a > b && a > c && b > c){
		printf("max la %d \n", a);
		printf("min la %d \n", c);
		printf("so con lai la %d \n",b);
	}else if(a > b && a > c && b < c){
		printf("max la %d \n", a);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", c);
	}else if(b > a && b > c && c > a){
		printf("max la %d \n", b);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", c);
	}else if(b > a && b > c && c < a){
		printf("max la %d \n", b);
		printf("min la %d \n", c);
		printf("so con lai la %d \n", a);
	}else if(c > a && c > b && a > b){
		printf("max la %d \n", c);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", a);
	}else if(c > a && c > b && a < b){
		printf("max la %d \n", c);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", b);
	}
}

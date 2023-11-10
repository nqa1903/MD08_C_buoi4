#include <stdio.h>

int main(){
	int a , b ,c;
	printf("nhap 3 canh tam giac : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a == b && b!=c || b == c && a !=c || c == a && a !=b){
		printf("la tam giac can \n");
	}
	if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
		printf("la tam giac vuong \n");
	} 
	if(a*a + b*b == c*c && a == b || a*a + c*c == b*b && a == c || b*b + c*c == a*a && b ==c){
		printf("la tam giac vuong can \n");
	}
	if(a == b && a == c){
		printf("la tam giac deu \n");
	}
	if(a + b > c && a + c > b && b + c > a){
		printf("la tam giac thuong");
	} 
}

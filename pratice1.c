#include <stdio.h>

int main(){
	int a , b;
	printf("nhap 2 so a va b: ");
	scanf("%d %d", &a , &b);
	fflush stdin;
	char x;
	printf("nhap vao phep tinh + - * / %% : ");
	scanf("%c" ,&x);
	switch (x){
		case '+':
			printf("%d" ,a + b);
			break;
		case '-':
			printf("%d" ,a - b);
			break;
		case '*':
			printf("%d" , a * b);
			break;
		case '/':
			printf("%f" , (float) a/b);
			break;
		case '%':
			printf("%d" , a%b);
			break;
		default:
			printf("khong co phep tinh tren");
	}
}

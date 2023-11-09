#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	float i = n%5;
	printf("nhap so nguyen n : ");
	scanf("%d", &n);
	
//	if(n%5 == 0){
//		printf("%d la so chia het cho 5" , n);
//	}else{
//		printf("%f" ,i);
//	}
	
//	if(n % 3 == 0 && n % 5 == 0){
//		printf("%d chia het cho 3 va 5" , n);
//	}
	
//	if(n % 3 == 0){
//		if( n % 5 ==0){
//			printf("%d" , n);	
//		}
//	}

	switch(n){
		case 0:
			printf("0 \n");
			break;
		case 1:
			printf("1 \n");
			break;
		case 2:
			printf("2 \n");
			break;
		case 3:
			printf("3 \n");
			break;
		case 4:
			printf("4 \n");
			break;
		case 5:
			printf("5 \n");
			break;
		case 6:
			printf("6 \n");
			break;
		case 7:
			printf("7 \n");
			break;
		case 8:
			printf("8 \n");
			break;
		default:
			printf("9");
	}
}

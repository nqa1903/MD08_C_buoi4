#include <stdio.h>

int main(){
	long ticket_price = 7000;
	int age;
	printf("Hay nhap tuoi :");
	scanf("%d", &age);
	
	if(age < 6 || age >= 60){
		printf("mien phi ve");
	}else if(6 <= age && age < 18){
		printf("%d", ticket_price/2);
	}else if(18 <= age && age < 60){
		printf("%d" , ticket_price);
	}
}

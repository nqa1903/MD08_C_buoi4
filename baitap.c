#include <stdio.h>

int main(){
	long long ticket_price = 7000;
	int age;
	printf("Hay nhap tuoi :");
	scanf("%d", &ticket_price);
	
	if(age < 6){
		printf("mien phi ve");
	}else if(6 <= age && age < 18){
		printf("%d" , ticket_price / 2);
	}else if(18 <= age && age < 60){
		printf("%d" , ticket_price);
	}else{
		printf("mien phi ve");
	}
}

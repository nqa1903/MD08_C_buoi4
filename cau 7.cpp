#include <stdio.h>

int main(){
	int salary , actual_workday;
	printf("Luong co ban la : ");
	scanf("%d" , &salary);
	printf("So ngay cong thuc te la :");
	scanf("%d" , &actual_workday);
	float money = salary * ((float)actual_workday/26);
	if(actual_workday < 26){
		printf("tien luong la %f",money);
	}else{
		money = (salary*((float)actual_workday/26) + 1.5*(actual_workday - 26));
		printf("tien luong la %f",money);
	}
}

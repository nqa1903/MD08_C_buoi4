#include <stdio.h>

int main(){
	int old_electric_index , new_electric_index;
	printf("nhap chi so cong to dien cu : ");
	scanf("%d", &old_electric_index);
	printf("nhap chi so cong to dien moi : ");
	scanf("%d", &new_electric_index);
	int electric_energy_meter = new_electric_index - old_electric_index;
	
	if(0 <= electric_energy_meter &&  electric_energy_meter < 50){
		printf("10.000VND");
	}else if(50 <= electric_energy_meter && electric_energy_meter < 100){
		printf("15.000VND");
	}else if(100 <= electric_energy_meter && electric_energy_meter < 150){
		printf("20.000VND");
	}else if(150 <= electric_energy_meter && electric_energy_meter < 200){
		printf("25.000VND");
	}else if(electric_energy_meter >= 200){
		printf("30.000VND");
	}
}

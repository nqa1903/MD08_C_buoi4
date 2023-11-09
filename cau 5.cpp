#include <stdio.h>

int main(){
	int year , month , day;
	printf("nhap nam , thang , ngay :");
	scanf("%d %d %d",&year,&month,&day);
	
	if(year < 0){
		printf("nam khong hop le");
	}
	if(0> month || month > 13 ){
		printf("thang khong hop le");
	}
	switch(month){
		case 1 :
		case 3 :
	 	case 5 :
	 	case 7 :
	 	case 8 :
	 	case 10 :
	 	case 12 :
	 		if(0 > day || day > 31){
	 			printf("ngay khong hop le");
			}
			break;
		case 4 :
		case 6 : 
		case 9 :
		case 11 :
			if(0 > day || day > 30){
				printf("ngay khong hop le");
			}
			break;
		case 2:
			if(month % 2 == 0){
				if(0 > day || day > 29){
					printf("ngay khong hop le");
				}
			}else{
				if(0 > day || day > 28){
					printf("ngay khong hop le");
				}
			}
	}
	
	printf("ngay %d thang %d nam %d", day , month , year);
}

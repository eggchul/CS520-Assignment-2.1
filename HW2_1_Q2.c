#include <stdio.h>

int main(){
	printf("Please input the mileage:\n");
	float mileage;
	int class;
	float totalFare;
	scanf("%f", &mileage);

	if(mileage < 0){
		printf("Invalid input\n");
		return 0;
	}

	printf("Please input the class: (1, 2, 3)\n");
	scanf("%d", &class);

	switch(class){
		case 1:
				if(mileage <= 100){
					totalFare = mileage * 3;
				}else if(mileage <= 150){
					totalFare = 300 + (mileage - 100) * 2.5;
				}else{
					totalFare = 300 + 50*2.5 + (mileage - 150) * 2;
				}
				break;

		case 2:
				if(mileage <= 100){
					totalFare = mileage * 2;
				}else if(mileage <= 150){
					totalFare = 200 + (mileage - 100) * 1.5;
				}else{
					totalFare = 200 + 50*1.5 + (mileage - 150) * 1;
				}
				break;

		case 3:
				if(mileage <= 100){
					totalFare = mileage * 1.5;
				}else if(mileage <= 150){
					totalFare = 150 + (mileage - 100) * 1;
				}else{
					totalFare = 150 + 50*1 + (mileage - 150) * 0.5;
				}
				break;
		default:
			printf("Invalid input");
		}
	printf("Fare of journey = $%.2f\n", totalFare);
}
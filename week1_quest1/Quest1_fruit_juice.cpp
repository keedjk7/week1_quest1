#include<stdio.h>

int main() {
	double Mango, Pine, Water;
	int income = 0, SSS = 0, PDMJ = 0, WF = 0, TB = 0;
	scanf_s("%lf%lf%lf", &Mango, &Pine, &Water);
	while (Mango>=0.5&&Pine>=0.45&&Water>=0.45) {
		Mango -= 0.5;
		Pine -= 0.45;
		Water -= 0.45;
		income += 100;
		SSS++;
	}
	while (Mango>=0.5&&Pine>=0.5) {
		Mango -= 0.5;
		Pine -= 0.5;
		income += 80;
		PDMJ++;
	}
	while (Mango>=0.5&&Water>=0.6) {
		Mango -= 0.5;
		Water -= 0.6;
		income += 75;
		WF++;
	}
	while (Water >= 0.5 && Pine >= 0.45) {
		Water -= 0.5;
		Pine -= 0.45;
		income += 70;
		TB++;
	}
	printf("Income = %d Bath\n", income);
	printf("Super Special Summer = %d Cup\n", SSS);
	printf("Pine Der Man J-Juice = %d Cup\n", PDMJ);
	printf("Water Fall = %d Cup\n", WF);
	printf("The Beach = %d Cup\n", TB);
	return 0;
}
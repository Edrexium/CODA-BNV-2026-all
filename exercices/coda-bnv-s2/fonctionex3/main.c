#include <stdio.h>

double compute_average(double number1, double number2, double number3)
{
	double average = (number1 + number2 + number3) / 3;

	return(average);
}

int main()
{
	double average;

	average = compute_average(12, 15, 18);

	printf("%.2f\n", average);

	average = compute_average(10, 20, 30);

	printf("%.2f\n", average);

	return 0;
}

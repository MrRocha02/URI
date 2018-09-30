#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	double radius, answer;

	scanf("%lf", &radius);
	answer = PI*(pow(radius, 2));
	printf("A=%.4f\n", answer);

	return 0;
}
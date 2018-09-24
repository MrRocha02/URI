#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

	double  numberOne, numberTwo, answer;

	scanf("%lf %lf", &numberOne, &numberTwo);


	numberOne *= 3.5;
	numberTwo *= 7.5;

	if(((numberOne || numberTwo) >= 0.0) ||	(numberOne || numberTwo) <= 10.0)
	{
		answer = (numberOne+numberTwo)/11.0;
		printf("MEDIA = %.5lf\n", answer);
	}
	return 0;
}

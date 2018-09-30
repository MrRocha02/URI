#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

	double  A, B, C, result;

	scanf("%lf %lf %lf", &A, &B, &C);


	A *= 2.0;
	B *= 3.0;
	C *= 5.0;

	if(((A || B || C) >= 0.0) || (A || B || C) <= 10.0){

		result = (A+B+C)/10.0;
		printf("MEDIA = %.1lf\n", result);
		

	}
	return 0;
}

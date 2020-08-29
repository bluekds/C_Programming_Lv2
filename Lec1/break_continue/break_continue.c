#include <stdio.h> 
#include <math.h> 

int main(void)
{
	double v;

	while (1) // infinite loop
	{
		printf("Enter a positive real number : "); 
		scanf_s("%lf", &v);
		if (v < 0.0) {
			//break;
			continue;
		}
		printf("the square root of %f is %f\n", v, sqrt(v)); 
	}

	printf("Finished!\n");
	return 0;
}

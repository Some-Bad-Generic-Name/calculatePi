#include <stdio.h>

int GregoryLeibniz(long iterations);

int main()
{
	int method;
	long int iterations;
	printf("Choose a method\n");
	printf("(1) Gregory - Leibniz\n");

	scanf("%d", &method);

	printf("How many iterations: ");
	scanf("%ld", &iterations);
	if (method == 1)
	{

		GregoryLeibniz(iterations);
	}
	return 0;
}

int GregoryLeibniz(long iterations)
{
	// this calculates pi using the Gregory - Leibniz method, while it does not converge fast
	// it works and is very simple to implement
	int divisor = 1.0;
	int add = 0;

	double sum = 1.0;

	for (long int i = 0; i < iterations; i++)
	{
		divisor += 2.0;
		if (add)
			sum = sum + (1.0 / divisor);
		if (!add)
			sum = sum - (1.0 / divisor);
		add = !add;
		printf("%.30lf	%.30lf	%ld\n", sum, sum * 4, i);
	}
	return 0;
}
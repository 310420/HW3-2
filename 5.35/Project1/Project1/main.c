#include <stdio.h>
#include <stdlib.h>

unsigned int n;
unsigned int u=2;
unsigned long long int fibonacci(unsigned int n);
unsigned long long int fibonacci2(unsigned int u);



int main(void)
{
	unsigned long long int result1, result2;
	unsigned int number1;

	printf("%s", "enter an integer:");
	scanf("%u", &number1);
	printf("Fibonacci( %u ) = ", number1);
	result1 = fibonacci(number1);
	result2 = fibonacci2(u);

	printf("\nFibonacci's max is( %u ) = %20u\n", u, result2);
	
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned int v;
	if (n < 2)
		printf("%u", a);
	while (n >1)
	{
		printf("%u,%u",a,b);
		a = a + b;
		b = a + b;
		v = n%5;
		n--;
		if (n > 1)
			printf(",");
		if (v == 0)
			printf("\n");
	}

}

unsigned long long int fibonacci2(unsigned int u)
{
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int c;
	
	while (b <100000000)
	{
		c = b;
		b = a + b;
		a = c;
		u++;
	}
	return a;
	
}
#include <stdio.h>
#include <stdlib.h>

int base, exponent;
int integerpower(base, exponent);

int main(void)
{
	printf("�п�JX��N����(x n):");
	scanf("%d%d", &base, &exponent);
	printf("X��N���謰%d\n", integerpower(base, exponent));
	system("pause");
	return 0;
}

int integerpower(base, exponent)
{
	if (exponent >= 1)
	{
		int ans = base*integerpower(base, exponent - 1);
		return ans;
	}
	else
		return 1;
}
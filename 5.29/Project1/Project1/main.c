#include <stdio.h>
#include <stdlib.h>

int num1, num2;
int lcm(int num1, int num2);

int main(void)
{
	int same;
	printf("块ヴ種2计:");
	scanf("%d%d",&num1,&num2);
	same = lcm(num1, num2);
	printf("2计程そ计%d\n", same);
	system("pause");
	return 0;

}

int lcm(int num1, int num2)
{
	int x = 0;
	int a=1;
	int b = 1;
	int c=5;
	while (c!=0)
	{
        x=x++;
		a = x%num1;
		b = x%num2;
		c = a + b;
		
	}
	return x;
}
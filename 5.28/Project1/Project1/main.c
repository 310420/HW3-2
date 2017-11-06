#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char x;
	  
	printf("輸入一英文字母:");
	scanf("%c", &x);
	if (x >= 97)
		x = x - 32;
	else
		x = x + 32;
	printf("%c\n", x);
	system("pause");
	return 0;

}
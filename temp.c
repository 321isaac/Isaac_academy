#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#pragma warning(disable:6031)

int main(void)
{
	int i, t, num1, num2;
	
	scanf("%d", &t);
	for (i = 0; i < t;i++);
	{
		scanf("%d %d", &num1, &num2);		
		printf("%d+%d=%d\n", num1, num2, num1 + num2);
	}
	return 0;
}

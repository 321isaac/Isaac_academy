/*
KOI
2022 1차대회
초등부 1번
"빵"
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i, a, b, result=10000;
	scanf("%d", &N);

	for (i = 0;i < N;i++) {
		scanf("%d %d", &a, &b);
		if (a <= b && b < result) result = b;
	}

	if (result == 10000) result = -1;
	printf("%d", result);

	return 0;
}

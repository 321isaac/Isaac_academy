#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n, temp=0;
	scanf("%d", &n);

	if (n == 1) printf("1");
	else {
		while (1) {
			if (n == 1) break;
			n /= 2;
			temp++;
		}
		printf("%d", (int)pow(2.0, (double)temp));
	}
	return 0;
}

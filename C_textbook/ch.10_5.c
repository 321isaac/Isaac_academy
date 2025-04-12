// print 10 prime numbers

#include <stdio.h>

int main() {
	int i, n=3, flag=0, cnt=1;

	printf("2 ");

	while (cnt < 10) {
		for (i = 2;i < n;i++) {
			if (n % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%d ", n);
			cnt++;
		}
		n++;
		flag = 0;
	}
	
	return 0;
}

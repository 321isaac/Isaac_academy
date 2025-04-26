#include <stdio.h>

int main(void)
{
	int n, k, p, i, cnt=0, sum=0, result=0;
	int arr[3000] = { 0 };

	scanf("%d %d %d", &n, &k, &p);

	for (i = 0;i < n * k;i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0;i < n * k;) {
		while (cnt < k) {
			sum += arr[i];
			i++;
			cnt++;
		}
		if (sum > k - p) result++;
		cnt = 0;
		sum = 0;
	}

	printf("%d", result);

	return 0;
}

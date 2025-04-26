/*
KOI
2023 1차대회
초등부 1번 "크림빵"
*/


#include <stdio.h>

int main(void)
{
	int n, k, p, i, cnt=0, sum=0, result=0;
	int arr[3000] = { 0 };		//배열 크기는 n*k까지 필요한데 문제 조건에서 n, k <=50으로 주어졌기 때문에 2500 이상의 배열 크기가 필요함 (여유분을 포함하여 3000으로 설정)

	scanf("%d %d %d", &n, &k, &p);

	for (i = 0;i < n * k;i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0;i < n * k;) {
		while (cnt < k) {	//각 빵 묶음마다 팔 수 있는지 없는지를 세야하므로 k개씩 묶어서 반복
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

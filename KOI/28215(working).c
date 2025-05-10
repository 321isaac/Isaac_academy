#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int i, j, N, K, min_x=110000, max_x=-1, min_y=110000, max_y=-1, answer=-1;
	int house_x[50];
	int house_y[50];
	int shelter_x[3];
	int shelter_y[3];

	scanf("%d %d", &N, &K);

	for (i = 0;i < N;i++) {
		scanf("%d %d", &house_x[i], &house_y[i]);
	}

	for (i = 0;i < N;i++) {
		if (house_x < min_x) min_x = house_x;
		if (house_x > max_x) max_x = house_x;
		if (house_y < min_y) min_y = house_y;
		if (house_y > max_y) max_y = house_y;
	}

	for (i = min_x;i <= max_y;i++) {
		for (i = min_x;i <= max_y;i++) {

		}
	}



	return 0;
}

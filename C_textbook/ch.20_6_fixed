#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i=0, j, cnt = 1, strike = 0, ball = 0;
	int arr[3];
	int arr1[3];

	printf("Start Game\n");

	srand((int)time(NULL));

	for (i = 0; i < 3; i++)
		arr[i] = rand() % 10;

	if (arr[0] == arr[2] || arr[1] == arr[2] || arr[0] == arr[1])
	{
		while (1)
		{

			arr[i] = rand() % 10;
			if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
				break;
		}
	}

	//printf("com: %d %d %d \n", arr[0], arr[1], arr[2]);

	while (1)
	{
		for (i = 0; i < 3; i++) scanf("%d", &arr1[i]);

		for (i = 0; i < 3; i++) {
			if (arr[i] == arr1[i]) strike++;
		}

		printf("%d strike \n", strike);

		/*if (arr[0] == arr1[1] || arr[0] == arr1[2])
			ball += 1;
		if (arr[1] == arr1[0] || arr[1] == arr1[2])
			ball += 1;
		if (arr[2] == arr1[1] || arr[2] == arr1[0])
			ball += 1;*/

		for (i = 0;i < 3;i++) {
			for (j = 0;j < 3;j++) {
				if (arr[i] == arr1[j]) ball++;
			}
		}

		ball -= strike;

		printf("%d ball \n", ball);
		if (strike == 3)
			break;
		strike = 0; ball = 0;
	}

	printf("Game Over");

	return 0;
}

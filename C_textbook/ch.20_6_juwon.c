#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	printf("Start Game");

	
		int ball = 0;
		int user;
		int ib;
		int ic;
		int strike = 0;
		int ar[2][3];
		int i;
		int arr[3];
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
		
		while (1)
		{
			scanf_s("%d", &user);
			scanf_s("%d", &ib);
			scanf_s("%d", &ic);
			int arr1[3];
			arr1[0] = user;
			arr1[1] = ib;
			arr1[2] = ic;

			if (arr[0] == arr1[0])
				strike += 1;

			if (arr[1] == arr1[1])
				strike += 1;
			if (arr[2] == arr1[2])
				strike += 1;

			printf("%d strike \n", strike);

			if (arr[0] == arr1[1] || arr[0] == arr1[2])
				ball += 1;
			if (arr[1] == arr1[0] || arr[1] == arr1[2])
				ball += 1;
			if (arr[2] == arr1[1] || arr[2] == arr1[0])
				ball += 1;

			printf("%d ball \n", ball);
			if (strike == 3)
				break;
			strike = 0; ball = 0;
		}
		
	
		printf("Game Over");



	return 0;
}

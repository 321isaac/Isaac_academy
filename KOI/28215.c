/*
28215번. 대피소
2023년 1차 대회
초등부 2번 / 고등부 1번
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, h, N, K;
    int answer = 1000000;
    int house_x[50], house_y[50];

    scanf("%d %d", &N, &K);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &house_x[i], &house_y[i]);
    }

    // 1 shelter
    if (K == 1) {
        for (i = 0; i < N; i++) {
            int max_distance = 0;
            for (h = 0; h < N; h++) {
                int d = abs(house_x[i] - house_x[h]) + abs(house_y[i] - house_y[h]);
                if (d > max_distance) max_distance = d;
            }
            if (max_distance < answer) answer = max_distance;
        }
    }

    // 2 shelters
    if (K == 2) {
        for (i = 0; i < N - 1; i++) {
            for (j = i + 1; j < N; j++) {
                int max_distance = 0;
                for (h = 0; h < N; h++) {
                    int d1 = abs(house_x[i] - house_x[h]) + abs(house_y[i] - house_y[h]);
                    int d2 = abs(house_x[j] - house_x[h]) + abs(house_y[j] - house_y[h]);
                    int min_d = (d1 < d2) ? d1 : d2;
                    if (min_d > max_distance) max_distance = min_d;
                }
                if (max_distance < answer) answer = max_distance;
            }
        }
    }

    // 3 shelters
    if (K == 3) {
        for (i = 0; i < N - 2; i++) {
            for (j = i + 1; j < N - 1; j++) {
                for (k = j + 1; k < N; k++) {
                    int max_distance = 0;
                    for (h = 0; h < N; h++) {
                        int d1 = abs(house_x[i] - house_x[h]) + abs(house_y[i] - house_y[h]);
                        int d2 = abs(house_x[j] - house_x[h]) + abs(house_y[j] - house_y[h]);
                        int d3 = abs(house_x[k] - house_x[h]) + abs(house_y[k] - house_y[h]);
                        int min_d = d1;
                        if (d2 < min_d) min_d = d2;
                        if (d3 < min_d) min_d = d3;
                        if (min_d > max_distance) max_distance = min_d;
                    }
                    if (max_distance < answer) answer = max_distance;
                }
            }
        }
    }

    printf("answer: %d\n", answer);
    return 0;
}

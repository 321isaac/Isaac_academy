//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, h, N, K, distance_1=1, distance_2=1, distance_3=1, answer=1000000;
    //i, j, k is an index of house which is shelter
    //h is for houses
    int house_x[50];
    int house_y[50];
    scanf("%d %d", &N, &K);

    // get x, y coordinates of houses
    for (i = 0;i < N;i++) {
        scanf("%d %d", &house_x[i], &house_y[i]);
    }

    // one shelter
    if(K==1){
        for(i=0;i<N;i++){
            for(h=0;h<N;h++){
                if(distance_1>0 && distance_1<(abs(house_x[i]-house_x[h])+abs(house_y[i]-house_y[h]))){
                    distance_1=abs(house_x[i]-house_x[h])+abs(house_y[i]-house_y[h]);
                }
            }
            if(answer>distance_1) answer=distance_1;
        }
    }

    // two shelter
    if(K==2){
        for(i=0;i<N-1;i++){
            for(j=i+1;j<N;j++){
                for(h=0;h<N;h++){
                    if(distance_1>0 && distance_1<(abs(house_x[i]-house_x[h])+abs(house_y[i]-house_y[h]))){
                        distance_1=abs(house_x[i]-house_x[h])+abs(house_y[i]-house_y[h]);
                    }
                    if(distance_2>0 && distance_2<(abs(house_x[j]-house_x[h])+abs(house_y[j]-house_y[h]))){
                        distance_2=abs(house_x[j]-house_x[h])+abs(house_y[j]-house_y[h]);
                    }
                }
            }
        }

    }

    // three shelter
    if(K==3){
        for(i=0;i<N-2;i++){
            for(j=i+1;j<N-1;j++){
                for(k=j+1;k<N;k++){

                }
            }
        }
    }


    printf("answer: %d", answer);

    return 0;
}

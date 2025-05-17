#include <stdio.h>

int main(){
    int N, cnt=0;

    scanf("%d", &N);

    while(N>4){
        cnt+=N/5;
        N-=5*cnt;
    }

    if(N%3==0) cnt+=N/3;
    else{
        while(N%3!=0){
            if(cnt<=0){
                printf("-1");
                return 0;
            }
            cnt--;
            N+=5;
            if(N%3==0) cnt+=N/3;
        }
    }

    printf("%d", cnt);

    return 0;
}

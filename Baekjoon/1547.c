//1547번. 공 (브론즈 3)

#include <stdio.h>

int main(){
    int M, i, j, k, a, b, flag=0;
    int arr[3]={1,2,3};

    scanf("%d", &M);

    for(i=0;i<M;i++){
        scanf("%d %d", &a, &b);

        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(arr[j]==a && arr[k]==b){
                    arr[j]=b;
                    arr[k]=a;
                    //printf("a: %d, b: %d, j: %d, k: %d, arr: %d %d %d\n", a, b, j, k, arr[0], arr[1], arr[2]);
                    flag=1;
                    break;
                }
            }
            if (flag==1) break;
        }
        flag=0;
    }

    printf("%d", arr[0]);

    return 0;
}

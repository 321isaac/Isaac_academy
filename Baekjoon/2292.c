// 일반 수학 1/벌집

#include <stdio.h>  
  
int main(){  
    int i=0, N, ans=0;  
  
    scanf("%d", &N);  
  
    if(N==1) printf("%d", 1);  
    else{  
        N-=1;  
        while(N>0){  
            ans++;  
            N-=i;  
            i+=6;  
        }  
  
        printf("%d", ans);  
    }  
  
    return 0;  
}

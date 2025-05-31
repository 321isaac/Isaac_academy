// 일반 수학 1/세탁소 사장 동혁

#include <stdio.h>  
  
int main(){  
    int i, j, test, coin[4]={0}, bill;  
  
    scanf("%d", &test);  
  
    for(i=0;i<test;i++){  
        scanf("%d", &bill);  
  
        coin[0]=bill/25;  
        bill-=coin[0]*25;  
        coin[1]=bill/10;  
        bill-=coin[1]*10;  
        coin[2]=bill/5;  
        bill-=coin[2]*5;  
        coin[3]=bill/1;  
        bill-=coin[3]*1;  
  
        for(j=0;j<4;j++) printf("%d ", coin[j]);  
    }  
  
  
    return 0;  
}

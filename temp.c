#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int w, e,i;
	int q, a,j;
	int hehehe;
	scanf("%d", &q);
	int aa[10] ;
	for ( i = 0; i < q; i++)
	{
		aa[i] = i+1;
	}
	scanf("%d", &j);
	for ( a = 0; a < j; i++)
	{
		scanf("%d %d", &w, &e);
	
		hehehe = aa[w];
		aa[w] = aa[e];
		aa[e] = hehehe;
	}
	for ( i = 0; i < q; i++)
	{
		printf("값: %d", aa[i] = i+1);
	}
	
	return 0;
}

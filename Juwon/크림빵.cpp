#include<iostream>
#include <vector>
using namespace std;
int main()
{ 
    int arr1[16354];
    int trash = 0;
    int bin=0; //0의 개수를 감당하는 변수이다.
    int cnt=0; //1의 개수를 감당하는 변수이다.
    vector<int> a;
    int arr[10000];
    int n, k, p, df; //n은 묶음수, k는 한 묶음의 빵의 개수고,  df는 010101이런거
    cin >> n;
    cin >> k;
    cin >> p;
   
    for (int i = 0; i < n * k; i++)
    {
        cin >> df;
        a.push_back(df);
        arr[i] = a[i];
        
    }
    for (int ib = 0; ib < n; ib++) {
        for (int ia = 0; ia < ib*ka; ia++)
        {
            if (arr[ia] == 0) bin++;
            
        }
        if (bin < p)  cnt++;
        bin = 0;
    }
    
        
    printf("%d", cnt);
    return 0;
    





}

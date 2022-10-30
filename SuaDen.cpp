#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,b;
    cin >> n >> k >> b;
    int a[n+1] = {0};
    for(int i=0;i<b;i++){
        int x;
        cin >> x;
        a[x] = 1;
    }
    int Min = 100000;
    int cnt;
    for(int i=1;i<=n-k+1;i++){
        cnt = 0;
        for(int j=i;j<=i+k-1;j++){
            if(a[j] == 1) cnt++;
        }
        Min = min(cnt,Min);
    }
    cout<<Min;
}
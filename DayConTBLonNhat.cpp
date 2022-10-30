#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int cnt = 0;
        for(int i=0;i<k;i++) cnt += a[i];
        double TB1 = (double)cnt / k;
        double TB2;
        int x = 0;
        for(int i=1;i<=n-k;i++)
        {
            cnt = cnt - a[i-1] + a[i+k-1];
            TB2 = (double)cnt / k;
            if(TB2 > TB1){
                x = i;
                TB1 = TB2;
            }
        }
        for(int i=x;i<x+k;i++) cout <<a[i]<<" ";
        cout << endl;
    }
}
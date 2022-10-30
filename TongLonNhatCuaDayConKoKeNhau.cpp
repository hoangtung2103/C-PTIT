#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        if(n==1) cout << a[0] << endl;
        else if(n==2) cout << max(a[0], a[1]) <<endl;
        else if(n>2){
            b[0] = a[0];
            b[1] = a[1];
            b[2] = a[0] + a[2];
            long long Max = b[0];
            for(int i=3;i<n;i++)
            {
                Max = max(Max,b[i-2]);
                b[i] = Max + a[i];
            }
            cout << max(b[n-1],b[n-2]) <<endl;
        }
    }
    
}
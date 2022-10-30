#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for(long long &x : a) cin >> x;
        long long sum1 = a[0], sum2 = a[0];
        for(int i=1;i<n;i++){
            sum1 = max(a[i],sum1+a[i]);
            sum2 = max(sum1,sum2);
        }
        cout << sum2 << endl;
    }
}

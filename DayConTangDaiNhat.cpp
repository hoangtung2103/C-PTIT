#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int &x : a) cin >> x;
        vector <int> b(n+1,INT_MAX);
        b[0] = INT_MIN;
        int Max = 0;
        for(int x : a){
            int k = lower_bound(b.begin(),b.end(),x) - b.begin();
            b[k] = x;
            Max = max(Max,k);
        }
        cout << Max << endl;
    }
    
}
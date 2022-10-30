#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,n,x;
        cin >> m >> n;
        int a[m], b[n];
        set <int> s;
        vector <int> p;
        for(int i=0;i<m;i++){
            cin >> x;
            a[i] = x;
            s.insert(x);
        }
        for(int i=0;i<n;i++){
            cin >> x;
            b[i] = x;
            s.insert(x);
            int *z = find(a,a+m,x);
            if(z != a+m) p.push_back(x);
        }
        for(int i:s) cout<<i<<" ";
        cout<<endl;
        for(int i:p) cout<<i<<" ";
        cout<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        vector <int> b;
        vector <int> c;
        if(n%2==0){
            for(int i=0;i<n/2;i++) b.push_back(a[i]);
            for(int i=n-1;i>=n/2;i--) c.push_back(a[i]);
        }else{
            for(int i=0;i<n/2;i++) b.push_back(a[i]);
            for(int i=n-1;i>=n/2;i--) c.push_back(a[i]);
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<c[x++]<<" ";
            }else{
                cout<<b[y++]<<" ";
            }
        }
        cout<<endl;
    }
}
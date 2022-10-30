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
            for(int i=0;i<n;i++){
                if(i<n/2) b.push_back(a[i]);
                else c.push_back(a[i]);
            }
        }else{
            for(int i=0;i<n;i++){
                if(i<=n/2) b.push_back(a[i]);
                else c.push_back(a[i]);
            }
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<b[x++]<<" ";
            }else{
                cout<<c[y++]<<" ";
            }
        }
        cout<<endl;
    }
}
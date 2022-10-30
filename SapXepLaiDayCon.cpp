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
        int a[n+1], b[n+1];
        for(int i=1;i<=n;i++){
            int x;
            cin >> x;
            a[i] = x;
            b[i] = x;
        }
        sort(b+1,b+n+1);
        int l,r;
        for(int i=1;i<n;i++){
            if(a[i] != b[i]){
                l=i;
                break;
            }
        }
        for(int i=n;i>1;i--){
            if(a[i] != b[i]){
                r=i;
                break;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}
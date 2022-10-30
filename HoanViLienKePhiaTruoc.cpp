#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=n-2;i>=0;i--){
            if(a[i] > a[i+1]){
                x = i;
                break;
            }
        }
        for(int i=n-1;i>x;i--){
            if(a[i]<a[x]){
                swap(a[i],a[x]);
                break;
            }
        }
        reverse(a+x+1,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
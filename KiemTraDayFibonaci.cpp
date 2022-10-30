#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool Fibonaci(long long n)
{
    if(n==0||n==1) return true;
    else
    {
        long long fn, f0 = 0, f1 = 1;
        for(int i=1;i<100;i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            if(fn == n){
                return true;
                break;
            }
        }
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector <int> s;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(Fibonaci(a[i])) s.push_back(a[i]);
        }
        for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
        cout<<endl;
    }
}
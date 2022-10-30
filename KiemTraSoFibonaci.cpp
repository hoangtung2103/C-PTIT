#include <iostream>
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
        long long n;
        cin >> n;
        if(Fibonaci(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
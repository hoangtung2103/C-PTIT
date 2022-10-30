#include <iostream>
using namespace std;
long long modulo = 1e9 + 7;
long long Fibonaci_mod(int n)
{
    if(n==0 || n==1) return n;
    else{
        long long a = 0, b = 1;
        for(int i=2;i<=n;i++){
            b = a + b;
            a = b - a;
            a %= modulo;
            b %= modulo;
        }
        return b;
    }
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cout << Fibonaci_mod(x) << endl;
    }
}
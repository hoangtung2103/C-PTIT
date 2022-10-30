#include <iostream>
using namespace std;

long long modulo(long long a, long long b, long long c) //(a*b)%c
{
    if(b==0) return 0;
    long long temp = modulo(a,b/2,c);
    if(b%2==1) return (a%c+2*(temp%c))%c;
    else return (2*(temp%c))%c;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        cout << modulo(a,b,c) << endl;
    }
}

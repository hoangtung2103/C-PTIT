#include <iostream>
#include <string>
using namespace std;
long long GCD(long long a,long long b){
    long long r;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,x,y;
        cin >> a >> x >> y;
        long long n = GCD(x,y);
        string z = to_string(a);
        string w;
        for(int i=0;i<n;i++) w += z;
        cout<<w<<endl;
    }
}
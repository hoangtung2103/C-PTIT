#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

void Tong2SNL(string a,string b) // a >= b
{
    int n1 = a.length() , n2 = b.length() , n = 0;
    int x[n1], y[n1], z[n1+1];
    for(int i=0;i<n1;i++) x[i] = a[i]-'0';
    for(int i=0;i<n2;i++) y[i] = b[i]-'0';
    reverse(y,y+n2);
    for(int i=n2;i<n1;i++) y[i] = 0;
    reverse(x,x+n1);
    int remb = 0;
    for(int i=0;i<n1;i++){
        int tmp = x[i] + y[i] + remb;
        z[n++] = tmp%10;
        remb=tmp/10;
    }
    if(remb) z[n++] = remb;
    for(int i=n-1;i>=0;i--) cout<<z[i];
    cout<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin >> a >> b;
        a.length() >= b.length() ? Tong2SNL(a,b) : Tong2SNL(b,a);
    }
    
}
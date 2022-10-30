#include <bits/stdc++.h>
using namespace std;
int TongChuSo(string s)
{
    int sum = 0;
    int x = s.length();
    for(int i=0;i<x;i++){
        sum += s[i] - '0';
    }
    if(sum<10) return sum;
    return TongChuSo(to_string(sum));
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       string s;
       cin >> s;
       if(TongChuSo(s)==9) cout<<1<<endl;
       else cout<<0<<endl; 
    }
}
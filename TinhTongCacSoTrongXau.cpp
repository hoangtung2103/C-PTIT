#include <bits/stdc++.h>
using namespace std;
int Tong(string s)
{
    int cnt = 0;
    int sum = 0;
    s = s + 'a';
    for(char x : s){
        if(isdigit(x)){
            cnt = cnt*10 + (x-'0');
        } else{
            sum += cnt;
            cnt = 0;
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string tung;
        cin >> tung;
        cout<<Tong(tung)<<endl;
    }
}
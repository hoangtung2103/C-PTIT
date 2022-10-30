#include <bits/stdc++.h>
using namespace std;
int LonNhat(string s)
{
    int cnt = 0;
    int Max = -100;
    s = s + 'a';
    for(char x : s){
        if(isdigit(x)){
            cnt = cnt*10 + (x-'0');
        } else{
            Max = max(Max,cnt);
            cnt = 0;
        }
    }
    return Max;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout<<LonNhat(s)<<endl;
    }
}
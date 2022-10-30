#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map <char,int> mp;
        char max;
        int dem = 0;
        for(char i : s){
            mp[i]++;
            if(mp[i] > dem){
                max = i;
                dem = mp[i];
            }
        }
        if(mp[max]-1>s.length()-mp[max]) cout<<0<<endl;
        else cout<<1<<endl;
    } 
}
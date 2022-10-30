#include <bits/stdc++.h>
using namespace std;
long long NhoNhat(string &s1, string &s2)
{
    for(int i=0;i<s1.size();i++) if(s1[i] == '6') s1[i] = '5';
    for(int i=0;i<s2.size();i++) if(s2[i] == '6') s2[i] = '5';
    long long a = stoll(s1);
    long long b = stoll(s2);
    return a+b;
}

long long LonNhat(string &s1, string &s2)
{
    for(int i=0;i<s1.size();i++) if(s1[i] == '5') s1[i] = '6';
    for(int i=0;i<s2.size();i++) if(s2[i] == '5') s2[i] = '6';
    long long a = stoll(s1);
    long long b = stoll(s2);
    return a+b;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout<<NhoNhat(s1,s2)<<" "<<LonNhat(s1,s2)<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector <char> a;
        int sum = 0;
        for(char x : s){
            if(isalpha(x)) a.push_back(x);
            if(isdigit(x)) sum += x-'0';
        }
        sort(a.begin(),a.end());
        string z;
        for(char x : a) z += x;
        z = z + to_string(sum);
        cout<<z<<endl;
    }
}
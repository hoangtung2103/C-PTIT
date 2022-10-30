#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin,s1);
        getline(cin,s2);
        string temp;
        stringstream ss1(s1);
        stringstream ss2(s2);
        set <string> a1;
        set <string> a2;
        while(ss1 >> temp) a1.insert(temp);
        while(ss2 >> temp) a2.insert(temp);
        for(string i:a1){
            if(a2.find(i) == a2.end()) cout<<i<<" ";
        }
        cout<<endl;
    }
}
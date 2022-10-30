#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {   
        cin.ignore();
        string a;
        getline(cin,a);
        int k;
        cin>>k;
        set<char>s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        if(26-s.size()<=k) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

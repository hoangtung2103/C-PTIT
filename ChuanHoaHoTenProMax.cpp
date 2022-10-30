#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        string temp;
        vector <string> a;
        while(ss >> temp){
            transform(temp.begin(),temp.end(),temp.begin(),::tolower);
            a.push_back(temp);
        }
        for(int i=0;i<a.size();i++) a[i][0] = toupper(a[i][0]);
        if(n==1){
            cout<<a[a.size()-1]<<" ";
            for(int i=0;i<a.size()-1;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else if(n==2){
            for(int i=1;i<a.size();i++) cout<<a[i]<<" ";
            cout<<a[0]<<endl;
        }
    }
}
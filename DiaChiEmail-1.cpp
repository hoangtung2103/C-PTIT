#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> a;
    string temp;
    while(ss >> temp){
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        a.push_back(temp);
    }
    string ho;
    for(int i=0;i<a.size()-1;i++){
        ho += a[i][0];
    }
    string email = a[a.size()-1]+ho+"@ptit.edu.vn";
    cout<<email;
}
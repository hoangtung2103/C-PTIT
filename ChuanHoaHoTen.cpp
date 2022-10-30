#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string temp;
    vector<string> a;
    stringstream ss(s);
    while(ss >> temp){
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        a.push_back(temp);
    }
    int x = a.size();
    for(int i=0;i<x-1;i++) if(i<x-1) a[i][0] = toupper(a[i][0]);
    for(int i=0;i<a[x-1].size();i++) a[x-1][i] = toupper(a[x-1][i]);
    for(int i=0;i<x-1;i++){
        if(i<x-2) cout<<a[i]<<" ";
        if(i==x-2) cout<<a[i]<<", ";
    } cout<<a[x-1];
}
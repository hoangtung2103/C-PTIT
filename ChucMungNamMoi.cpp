#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int dem = 1;
    cin >> n;
    string s[n];
    cin.ignore();
    for(int i=0;i<n;i++) getline(cin,s[i]);
    sort(s,s+n);
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) dem++;
    }
    cout << dem;
}
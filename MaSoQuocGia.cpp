#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int x = s.find("084");
        string t = s.erase(x,3);
        cout << t << endl;
    }
}
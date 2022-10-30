#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int j=0,i=0;
        while(i<s.size()){
            int dem = 0;
            while(s[i]==s[j]){
                dem++;
                j++;
            }
            cout<<s[i]<<dem;
            i = j;
        }
        cout<<endl;
    }
}
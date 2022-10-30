#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin,a);
        int b[1000] = {0};
        for(int i=0;i<a.size();i++){
            b[a[i]]++;
        }
        for(int i=0;i<a.size();i++){
            if(b[a[i]]==1){
                cout<<a[i];
                b[a[i]]=0;
            }
        }
        cout << endl;
    }
}
#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        int dem = 1;
        getline(cin,s);
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='\n'&&s[i+1]!='\n'&&s[i+1]!='\t'&&s[i+1]!=' ') dem++;
            else if(s[i]=='\t'&&s[i+1]!='\n'&&s[i+1]!='\t'&&s[i+1]!=' ') dem++;
            else if(s[i]==' '&&s[i+1]!='\n'&&s[i+1]!='\t'&&s[i+1]!=' ') dem++;
        }
        cout<<dem<<endl;
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool KT1(vector <string> b){
    for(int i=0;i<5;i++){
        if(i==2){
            if(b[1][i]>=b[1][4]) return false;
        }
        else if(i==3){
            i++;
            if(b[1][i]>=b[1][i+1]) return false;
        }
        else{
            if(b[1][i]>=b[1][i+1]) return false;
        }
    } return true;
}
bool KT2(vector <string> b){
    char x = b[1][0];
    for(int i=1;i<6;i++){
        if(i!=3){
            if(b[1][i]!=x) return false;
        }
    } return true;
}
bool KT3(vector <string> b){
    if(b[1][0]==b[1][1]&&b[1][1]==b[1][2]&&b[1][4]==b[1][5]) return true;
    else return false;
}
bool KT4(vector <string> b){
    for(int i=0;i<6;i++){
        if(i!=3){
            if(b[1][i]!='6'&&b[1][i]!='8') return false;
        }
    } return true;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int t=0;t<n;t++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector <string> b;
        string temp;
        while (getline(ss,temp,'-'))
        {
            b.push_back(temp);
        }
        if(KT1(b)) cout<<"YES\n";
        else if(KT2(b)) cout<<"YES\n";
        else if(KT3(b)) cout<<"YES\n";
        else if(KT4(b)) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}
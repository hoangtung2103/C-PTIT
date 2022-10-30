#include <bits/stdc++.h>
using namespace std;

bool KTThuanNgich(string s)
{
    int x = s.size()-1;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[x]) return false;
        x--;
    }
    return true;
}

string HoangTung(string s)
{
    string z;
    for(char x : s){
        if(x=='A'||x=='B'||x=='C'||x=='a'||x=='b'||x=='c') z += '2';
        else if(x=='D'||x=='E'||x=='F'||x=='d'||x=='e'||x=='f') z += '3';
        else if(x=='G'||x=='H'||x=='I'||x=='g'||x=='h'||x=='i') z += '4';
        else if(x=='J'||x=='K'||x=='L'||x=='j'||x=='k'||x=='l') z += '5';
        else if(x=='M'||x=='N'||x=='O'||x=='m'||x=='n'||x=='o') z += '6';
        else if(x=='P'||x=='Q'||x=='R'||x=='S'||x=='p'||x=='q'||x=='r'||x=='s') z += '7';
        else if(x=='T'||x=='U'||x=='V'||x=='t'||x=='u'||x=='v') z += '8';
        else if(x=='W'||x=='X'||x=='Y'||x=='Z'||x=='w'||x=='x'||x=='y'||x=='z') z += '9';
    }
    return z;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(KTThuanNgich(HoangTung(s))) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
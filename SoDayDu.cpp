#include <bits/stdc++.h>
using namespace std;
bool KiemTra(string a){
    if(a[0]=='0') return false;
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!='0'&&a[i]!='1'&&a[i]!='2'&&a[i]!='3'&&a[i]!='4'&&a[i]!='5'&&a[i]!='6'&&a[i]!='7'&&a[i]!='8'&&a[i]!='9') return false;
        } return true;
    }
}
bool Tu0Den9(string a){
    int so0=0,so1=0,so2=0,so3=0,so4=0,so5=0,so6=0,so7=0,so8=0,so9=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='0') so0++;
        if(a[i]=='1') so1++;
        if(a[i]=='2') so2++;
        if(a[i]=='3') so3++;
        if(a[i]=='4') so4++;
        if(a[i]=='5') so5++;
        if(a[i]=='6') so6++;
        if(a[i]=='7') so7++;
        if(a[i]=='8') so8++;
        if(a[i]=='9') so9++;
    }
    if(so0==0||so1==0||so2==0||so3==0||so4==0||so5==0||so6==0||so7==0||so8==0||so9==0) return false;
    else return true;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if(KiemTra(s)){
            if(Tu0Den9(s)) cout<<"YES\n";
            else cout<<"NO\n";
        } else cout<<"INVALID\n";
    }
}
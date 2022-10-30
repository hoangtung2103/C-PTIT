#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

struct GiangVien
{
    string ma, name, mon, okla, ten;
};


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    string temp;
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i].name);
        getline(cin,a[i].mon);
        if(i<9) a[i].ma = "GV0" + to_string(i+1);
        else a[i].ma = "GV" + to_string(i+1);
        vector <string> s1;
        stringstream ss1(a[i].mon);
        while(ss1 >> temp)
        {
            s1.push_back(temp);
        }
        for(int j=0;j<s1.size();j++) a[i].okla += toupper(s1[j][0]);
        for(int j=0;j<a[i].name.size();j++) a[i].ten += tolower(a[i].name[j]);
    }
    int x;
    cin >> x;
    cin.ignore();
    while(x--)
    {
        string s;
        string tung;
        getline(cin,s);
        for(int i=0;i<s.size();i++) tung += tolower(s[i]);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
        for(int i=0;i<n;i++)
        {
            if(a[i].ten.find(tung) < a[i].ten.size()){
                cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].okla<<endl;
            }
        }
    }
}


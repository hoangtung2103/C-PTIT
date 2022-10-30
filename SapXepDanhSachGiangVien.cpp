#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

struct GiangVien
{
    string ma, name, mon, okla, ten;
};

bool cmp(GiangVien a, GiangVien b)
{
    if(a.ten == b.ten) return a.ma < b.ma;
    return a.ten < b.ten;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i].name);
        getline(cin,a[i].mon);
        if(i<9) a[i].ma = "GV0" + to_string(i+1);
        else a[i].ma = "GV" + to_string(i+1);
        string temp;
        vector <string> s1;
        vector <string> s2;
        stringstream ss1(a[i].mon);
        stringstream ss2(a[i].name);
        while(ss1 >> temp)
        {
            s1.push_back(temp);
        }
        while (ss2 >> temp)
        {
            s2.push_back(temp);
        }
        a[i].ten = s2[s2.size()-1];
        for(int j=0;j<s1.size();j++) a[i].okla += toupper(s1[j][0]);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].okla<<endl;
    }
}


#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
class SinhVien
{  
public:
    string name,ma;
    int d,m,y;
    string D,M;
    double diem;
    friend istream& operator >>(istream&,SinhVien&);
    friend ostream& operator <<(ostream&,SinhVien&);
};
istream& operator >>(istream &is,SinhVien &a)
{
    char x;
    getline(is,a.name);
    getline(is,a.ma);
    is>>a.d>>x>>a.m>>x>>a.y>>a.diem;
    return is;
}
ostream& operator <<(ostream &os,SinhVien &a)
{
    a.d<10 ? a.D = "0" + to_string(a.d) : a.D = to_string(a.d);
    a.m<10 ? a.M = "0" + to_string(a.m) : a.M = to_string(a.m);
    string temp;
    vector <string> s;
    stringstream ss(a.name);
    while(ss>>temp)
    {
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        s.push_back(temp);
    }
    for(int i=0;i<s.size();i++) s[i][0] = toupper(s[i][0]);
    os<<"B20DCCN001 ";
    for(int i=0;i<s.size();i++) os<<s[i]<<" ";
    os<<a.ma<<" "<<a.D<<"/"<<a.M<<"/"<<a.y<<" "<<fixed<<setprecision(2)<<a.diem;
    return os;
}
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

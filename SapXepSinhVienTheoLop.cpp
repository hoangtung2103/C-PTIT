#include <iostream>
#include <algorithm>
using namespace std;
class SinhVien
{
private:
    string code, name, lop, mail;
public:
    void Nhap();
    void In();
    friend bool cmp(SinhVien, SinhVien);
};

void SinhVien::Nhap()
{
    cin.ignore();
    getline(cin,code);
    getline(cin,name);
    cin >> lop >> mail;
}

void SinhVien::In()
{
    cout<<code<<" "<<name<<" "<<lop<<" "<<mail<<endl;
}

bool cmp(SinhVien a, SinhVien b)
{
    if(a.lop == b.lop) return a.code < b.code;
    return a.lop < b.lop;
    
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i=0;i<n;i++) a[i].Nhap();
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) a[i].In();
}

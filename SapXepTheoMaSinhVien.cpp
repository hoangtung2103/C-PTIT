#include <iostream>
#include <algorithm>
using namespace std;

int ok = 1;
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
    
    getline(cin,code);
    getline(cin,name);
    cin >> lop >> mail;
    cin.ignore();
    if(code.size() < 2) ok = 0;
}

void SinhVien::In()
{
    cout<<code<<" "<<name<<" "<<lop<<" "<<mail<<endl;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.code < b.code;    
}

int main()
{
    int n = 0;
    SinhVien a[1000];
    while(ok==1)
    {
        a[n].Nhap();
        n++;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) a[i].In();
}

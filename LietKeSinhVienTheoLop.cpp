#include <iostream>
#include <algorithm>
using namespace std;
class SinhVien
{
public:
    string code, name, lop, mail;
    void Nhap();
    void In();
};

void SinhVien::Nhap()
{
    cin >> code;
    cin.ignore();
    getline(cin,name);
    cin >> lop >> mail;
}

void SinhVien::In()
{
    cout<<code<<" "<<name<<" "<<lop<<" "<<mail<<endl;
}


int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i=0;i<n;i++) a[i].Nhap();
    int m;
    cin >> m;
    while(m--)
    {
        string s;
        cin >> s;
        cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
        for(int i=0;i<n;i++){
            if(a[i].lop == s) a[i].In();
        }
    }
}
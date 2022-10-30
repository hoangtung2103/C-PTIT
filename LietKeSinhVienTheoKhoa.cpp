#include <iostream>
#include <algorithm>
using namespace std;
class SinhVien
{
public:
    string code, name, lop, mail, okla;
    void Nhap();
    void In();
};

void SinhVien::Nhap()
{
    cin >> code;
    cin.ignore();
    getline(cin,name);
    cin >> lop >> mail;
    okla = "20";
    okla += lop[1];
    okla += lop[2];
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
        cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
        for(int i=0;i<n;i++){
            if(a[i].okla == s) a[i].In();
        }
    }
}
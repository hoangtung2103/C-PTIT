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
    for(int i=3;i<=6;i++) okla += code[i];
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
    cin.ignore();
    while(m--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++) s[i] = toupper(s[i]);
        cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
        if(s == "KE TOAN"){
            for(int i=0;i<n;i++){
                if(a[i].okla == "DCKT") a[i].In();
            }
        }
        else if(s == "CONG NGHE THONG TIN"){
            for(int i=0;i<n;i++){
                if(a[i].lop[0] != 'E'){
                    if(a[i].okla == "DCCN") a[i].In();
                }
            }
        }
        else if(s == "VIEN THONG"){
            for(int i=0;i<n;i++){
                if(a[i].okla == "DCVT") a[i].In();
            }
        }
        else if(s == "AN TOAN THONG TIN"){
            for(int i=0;i<n;i++){
                if(a[i].lop[0] != 'E'){
                    if(a[i].okla == "DCAT") a[i].In();
                }
            }
        }
        else if(s == "DIEN TU"){
            for(int i=0;i<n;i++){
                if(a[i].okla == "DCDT") a[i].In();
            }
        }
    }
}
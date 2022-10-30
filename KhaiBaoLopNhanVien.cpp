#include <iostream>
using namespace std;
class NhanVien
{
private:
    string name, sex, address, code;
    int d1,m1,y1,d2,m2,y2;
    string D1,M1,D2,M2;
public:
    void nhap();
    void xuat();
};

void NhanVien::nhap()
{
    char x;
    getline(cin,name);
    getline(cin,sex);
    cin>>d1>>x>>m1>>x>>y1;
    cin.ignore();
    getline(cin,address);
    getline(cin,code);
    cin>>d2>>x>>m2>>x>>y2;
}

void NhanVien::xuat()
{
    d1<10 ? D1 = "0" + to_string(d1) : D1 = to_string(d1);
    m1<10 ? M1 = "0" + to_string(m1) : M1 = to_string(m1);
    d2<10 ? D2 = "0" + to_string(d2) : D2 = to_string(d2);
    m2<10 ? M2 = "0" + to_string(m2) : M2 = to_string(m2);
    cout<<"00001 "<<name<<" "<<sex<<" "<<" "<<D1<<"/"<<M1<<"/"<<y1<<" "<<address<<" "<<code<<" "<<D2<<"/"<<M2<<"/"<<y2;
}

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
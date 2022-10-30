#include <iostream>
#include <iomanip>
using namespace std;
class SinhVien
{  
public:
    string name,ma;
    int d,m,y;
    string D,M;
    double diem;
    void nhap();
    void xuat();
};
void SinhVien::nhap()
{
    char x;
    getline(cin,name);
    getline(cin,ma);
    cin>>d>>x>>m>>x>>y>>diem;
}
void SinhVien::xuat()
{
    d<10 ? D = "0" + to_string(d) : D = to_string(d);
    m<10 ? M = "0" + to_string(m) : M = to_string(m);
    cout<<"B20DCCN001 "<<name<<" "<<ma<<" "<<D<<"/"<<M<<"/"<<y<<" "<<fixed<<setprecision(2)<<diem;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

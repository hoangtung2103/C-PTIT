#include <iostream>
#include <iomanip>
using namespace std;
struct ThiSinh
{
    string ten;
    string ngaysinh;
    double m1,m2,m3;
};
void nhap(ThiSinh &a){
    getline(cin,a.ten);
    getline(cin,a.ngaysinh);
    cin>>a.m1>>a.m2>>a.m3;
}
void in(ThiSinh &a){
    double diem = a.m1 + a.m2 + a.m3;
    cout<<a.ten<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(1)<<diem;
}
int main(){
    struct ThiSinh a;
    nhap(a);
    in(a);
}

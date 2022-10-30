#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten;
    string lop;
    int d,m,y;
    double diem;
};
void nhap(SinhVien &a){
    char z;
    getline(cin,a.ten);
    getline(cin,a.lop);
    cin>>a.d>>z>>a.m>>z>>a.y>>a.diem;
}
void in(SinhVien &a){
    if(a.d<10&&a.m>=10) cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<0<<a.d<<"/"<<a.m<<"/"<<a.y<<" "<<fixed<<setprecision(2)<<a.diem;
    else if(a.d>=10&&a.m<10) cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<a.d<<"/"<<0<<a.m<<"/"<<a.y<<" "<<fixed<<setprecision(2)<<a.diem;
    else if(a.d<10&&a.m<10) cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<0<<a.d<<"/"<<0<<a.m<<"/"<<a.y<<" "<<fixed<<setprecision(2)<<a.diem;
    else cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<a.d<<"/"<<a.m<<"/"<<a.y<<" "<<fixed<<setprecision(2)<<a.diem;

}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
#include <iostream>
using namespace std;
struct NhanVien{
    string ten,gioitinh,diachi;
    int d1,m1,y1,d2,m2,y2;
    string maso;
    string d1x,m1x,y1x,d2x,m2x,y2x;
};
void nhap(NhanVien &a){
    char z;
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    cin>>a.d1>>z>>a.m1>>z>>a.y1;
    cin.ignore();
    getline(cin,a.diachi);
    getline(cin,a.maso);
    cin>>a.d2>>z>>a.m2>>z>>a.y2;
}
void in(NhanVien &a){
    a.d1<10 ? a.d1x = "0"+to_string(a.d1):a.d1x=to_string(a.d1);
    a.m1<10 ? a.m1x = "0"+to_string(a.m1):a.m1x=to_string(a.m1);
    a.d2<10 ? a.d2x = "0"+to_string(a.d2):a.d2x=to_string(a.d2);
    a.m2<10 ? a.m2x = "0"+to_string(a.m2):a.m2x=to_string(a.m2);
    cout<<"00001 "<<a.ten<<" "<<a.gioitinh<<" "<<a.d1x<<"/"<<a.m1x<<"/"<<a.y1<<" "<<a.diachi<<" "<<a.maso<<" "<<a.d2x<<"/"<<a.m2x<<"/"<<a.y2;

}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
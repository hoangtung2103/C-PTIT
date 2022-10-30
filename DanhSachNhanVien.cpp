#include <iostream>
using namespace std;
int r=0;
struct NhanVien{
    string stt;
    string ten,gioitinh,diachi;
    string maso,ngay1,ngay2;
};
void nhap(NhanVien &a){
    if(r==0) cin.ignore();
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    getline(cin,a.ngay1);
    getline(cin,a.diachi);
    getline(cin,a.maso);
    getline(cin,a.ngay2);
    r++;
}
void inds(NhanVien ds[],int N){
    for(int i=0;i<N;i++){
        if(i+1<10) ds[i].stt = "0000"+to_string(i+1);
        else if(i+1>=10) ds[i].stt = "000"+to_string(i+1);
        cout<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].gioitinh<<" "<<ds[i].ngay1<<" "<<ds[i].diachi<<" "<<ds[i].maso<<" "<<ds[i].ngay2<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
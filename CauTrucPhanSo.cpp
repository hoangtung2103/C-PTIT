#include <iostream>
using namespace std;
long long GCD(long long a,long long b){
    long long r;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
struct PhanSo{
    long long x,y;
};
void nhap(PhanSo &a){
    cin>>a.x>>a.y;
}
void rutgon(PhanSo &a){
    long long uoc = GCD(a.x,a.y);
    a.x /= uoc;
    a.y /= uoc;
}
void in(PhanSo &a){
    cout<<a.x<<"/"<<a.y;
}
int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

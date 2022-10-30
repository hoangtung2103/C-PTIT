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
PhanSo tong(PhanSo a,PhanSo b){
    PhanSo sum;
    sum.y = a.y*b.y/GCD(a.y,b.y);
    sum.x = a.x*(sum.y/a.y)+b.x*(sum.y/b.y);
    long long uoc = GCD(sum.x,sum.y);
    sum.x /= uoc;
    sum.y /= uoc;
    return sum;
}
void in(PhanSo &a){
    if(a.x%a.y==0) cout<<a.x;
    else cout<<a.x<<"/"<<a.y;
}
int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

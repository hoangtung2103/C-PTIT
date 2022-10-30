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

class PhanSo
{
private:
    long long t,m;
public:
    PhanSo(int,int);
    friend istream &operator>>(istream&,PhanSo&);
    friend ostream &operator<<(ostream&,PhanSo&);
    void rutgon();
};

PhanSo::PhanSo(int tu,int mau)
{
    this->t = tu;
    this->m = mau;
}

void PhanSo::rutgon()
{
    long long uoc = GCD(t,m);
    t /= uoc;
    m /= uoc;
}
istream &operator>>(istream &is,PhanSo &a)
{
    is>>a.t>>a.m;
    return is;
}
ostream &operator<<(ostream &os,PhanSo &a)
{
    cout<<a.t<<"/"<<a.m;
    return os;
}

int main()
{
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}


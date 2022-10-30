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
    long long tu,mau;
public:
    PhanSo(long long,long long);
    friend istream& operator >> (istream&,PhanSo&);
    friend ostream& operator << (ostream&,PhanSo);
    friend PhanSo operator + (PhanSo,PhanSo);
    void rutgon();
};

PhanSo::PhanSo(long long t, long long m)
{
    this->tu = t;
    this->mau = m;
}

void PhanSo::rutgon()
{
    long long uoc = GCD(tu,mau);
    tu /= uoc;
    mau /= uoc;
}

istream &operator>>(istream &is, PhanSo &p)
{
    is >> p.tu >> p.mau;
    return is;
}

ostream &operator<<(ostream &os,PhanSo p)
{
    os << p.tu <<"/"<< p.mau;
    return os;
}

PhanSo operator + (PhanSo p, PhanSo q)
{
    PhanSo tong(1,1);
    tong.mau = p.mau*q.mau/GCD(p.mau,q.mau);
    tong.tu = p.tu*(tong.mau/p.mau) + q.tu*(tong.mau/q.mau);
    tong.rutgon();
    return tong;
}

int main()
{
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
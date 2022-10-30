#include <iostream>
using namespace std;

long long GCD(long long a,long long b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}

struct PhanSo
{
    long long tu,mau;
};

void process(PhanSo a, PhanSo b)
{
    // c = Pow( a+b , 2 )
    // c (tu1 / mau1)
    long long mau1 = a.mau*b.mau/GCD(a.mau,b.mau);
    long long tu1 = (mau1/a.mau)*a.tu + (mau1/b.mau)*b.tu;
    tu1 = tu1*tu1;
    mau1 = mau1*mau1;
    long long gcd1 = GCD(tu1,mau1);
    tu1 = tu1/gcd1;
    mau1 = mau1/gcd1;
    cout << tu1 << "/" << mau1 << " ";
    // d = a * b * c
    // d (tu2 / mau2)
    long long tu2 = a.tu * b.tu * tu1;
    long long mau2 = a.mau * b.mau * mau1;
    long long gcd2 = GCD(tu2,mau2);
    tu2 = tu2/gcd2;
    mau2 = mau2/gcd2;
    cout << tu2 << "/" << mau2 << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
#include <iostream>
#include <algorithm>
using namespace std;

int z = 1;

class NhanVien
{
private:
    int stt;
    string name, sex;
    string date1, addr;
    string ma, date2;
    string okela;
public:
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien&);
    friend bool cmp(NhanVien a,NhanVien b);
};

istream& operator >> (istream &is, NhanVien &a)
{
    a.stt = z;
    if(z == 1) is.ignore();
    getline(is,a.name);
    getline(is,a.sex);
    getline(is,a.date1);
    getline(is,a.addr);
    getline(is,a.ma);
    getline(is,a.date2);
    z++;
    for(int i=6;i<=9;i++) a.okela += a.date1[i];
    a.okela += a.date1[0];
    a.okela +=a.date1[1];
    a.okela +=a.date1[4];
    a.okela += a.date1[3];
    
    return is;
}

ostream& operator << (ostream &os, NhanVien &a)
{
    if(a.stt < 10) os<<"0000"<<a.stt<<" ";
    else os<<"000"<<a.stt<<" ";
    os<<a.name<<" "<<a.sex<<" "<<a.date1<<" "<<a.addr<<" "<<a.ma<<" "<<a.date2<<endl;
    return os;
}

bool cmp(NhanVien a, NhanVien b)
{
    return a.okela < b.okela;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}
int main()
{
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
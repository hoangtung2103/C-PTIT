#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct SinhVien
{
    string code, name, lop;
    string diem1, diem2, diem3;
};

void nhap(SinhVien &a)
{
    cin.ignore();
    getline(cin,a.code);
    getline(cin,a.name);
    getline(cin,a.lop);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}

void in_ds(SinhVien ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" "<<ds[i].code<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].diem1<<" "<<ds[i].diem2<<" "<<ds[i].diem3<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

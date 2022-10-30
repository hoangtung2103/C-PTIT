#include <iostream>
#include <algorithm>
using namespace std;

struct NhanVien
{
    string code, name, sex, date1, addr, maso, date2, okela;
};

int x = 1;

void nhap(NhanVien &a)
{
    if(x<10) a.code = "0000" + to_string(x);
    else a.code = "000" + to_string(x);
    cin.ignore();
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.date1);
    getline(cin,a.addr);
    cin >> a.maso >> a.date2;
    for(int i=6;i<=9;i++) a.okela += a.date1[i];
    a.okela += a.date1[0];
    a.okela += a.date1[1];
    a.okela += a.date1[3];
    a.okela += a.date1[4];
    x++;
}

bool cmp(NhanVien a, NhanVien b)
{
    return a.okela < b.okela;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ds[i].code<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].date1<<" "<<ds[i].addr<<" "<<ds[i].maso<<" "<<ds[i].date2<<endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
struct Time
{
    long long gio, phut, giay;
    long long HoangTung;
};

bool cmp(Time a, Time b)
{
    return a.HoangTung < b.HoangTung;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for(int i=0;i<n;i++)
    {
        a[i].HoangTung = 0;
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
        a[i].HoangTung += a[i].gio*3600;
        a[i].HoangTung += a[i].phut*60;
        a[i].HoangTung += a[i].giay;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout <<a[i].gio <<" "<< a[i].phut <<" "<< a[i].giay<<endl;
    }
}
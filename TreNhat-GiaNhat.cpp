#include <iostream>
#include <algorithm>
using namespace std;

struct Nguoi
{
    string name, date;
    string okla;
};

bool cmp(Nguoi a, Nguoi b)
{
    return a.okla > b.okla;
}

int main()
{
    int n;
    cin >> n;
    Nguoi a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].name >> a[i].date;
        for(int j=6;j<=9;j++) a[i].okla += a[i].date[j];
        a[i].okla += a[i].date[3];
        a[i].okla += a[i].date[4];
        a[i].okla += a[i].date[0];
        a[i].okla += a[i].date[1];
    }
    sort(a,a+n,cmp);
    cout << a[0].name <<endl<< a[n-1].name;
}

#include <iostream>
#include <algorithm>
using namespace std;

struct SinhVien
{
    int stt;
    string code, name, lop, mail, doanh_nghiep;
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.code < b.code;
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i=0;i<n;i++)
    {
        a[i].stt = i+1;
        cin >> a[i].code;
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].lop >> a[i].mail >> a[i].doanh_nghiep;
    }
    sort(a,a+n,cmp);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(a[i].doanh_nghiep == s)
            {
                cout << a[i].stt<<" "<<a[i].code<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].mail<<" "<<a[i].doanh_nghiep<<endl;
            }
        }
    }
    
}
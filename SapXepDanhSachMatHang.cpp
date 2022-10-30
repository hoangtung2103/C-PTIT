#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct HangHoa
{
    int number;
    string name, nhom;
    double giamua, giaban, loinhuan;
};

void nhap(HangHoa ds[], int n)
{
    for(int i=1;i<=n;i++)
    {
        cin.ignore();
        ds[i].number = i;
        getline(cin,ds[i].name);
        getline(cin,ds[i].nhom);
        cin >> ds[i].giamua >> ds[i].giaban;
        ds[i].loinhuan = ds[i].giaban - ds[i].giamua;
    }
}

bool cmp(HangHoa a, HangHoa b)
{
    return a.loinhuan > b.loinhuan;
}

void sapxep(HangHoa ds[], int n)
{
    sort(ds+1,ds+n+1,cmp);
}

void xuat(HangHoa ds[], int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << ds[i].number <<" "<< ds[i].name <<" "<< ds[i].nhom <<" "<< fixed << setprecision(2) << ds[i].loinhuan << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    HangHoa ds[100];
    nhap(ds,n);
    sapxep(ds,n);
    xuat(ds,n);
}
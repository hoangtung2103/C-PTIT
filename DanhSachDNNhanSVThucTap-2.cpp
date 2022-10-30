#include <iostream>
#include <algorithm>
using namespace std;

class DoanhNghiep
{
private:
    string code, name;
    int qtt;
public:
    void Nhap();
    void In();
    int getqtt();
    friend bool cmp(DoanhNghiep, DoanhNghiep);
};

int DoanhNghiep::getqtt()
{
    return qtt;
}

void DoanhNghiep::Nhap()
{
    cin.ignore();
    getline(cin,code);
    getline(cin,name);
    cin >> qtt;
}

void DoanhNghiep::In()
{
    cout<<code<<" "<<name<<" "<<qtt<<endl;
}

bool cmp(DoanhNghiep a,DoanhNghiep b)
{
    if(a.qtt == b.qtt) return a.code < b.code;
    return a.qtt > b.qtt;
}

int main()
{
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for(int i=0;i<n;i++) a[i].Nhap();
    sort(a,a+n,cmp);
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<x<<" DEN "<<y<<" SINH VIEN:\n";
        for(int i=0;i<n;i++){
            if(a[i].getqtt()>=x && a[i].getqtt()<= y){
                a[i].In();
            }
        }
    }
    
}

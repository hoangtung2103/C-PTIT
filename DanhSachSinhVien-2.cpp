#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

struct SinhVien
{
    string name, code, date, lop;
    double diem;
};

void nhap(SinhVien ds[], int n)
{
    for(int i=1;i<=n;i++)
    {   
        if(i<10) ds[i].code = "B20DCCN00" + to_string(i);
        else ds[i].code = "B20DCCN0" + to_string(i);
        cin.ignore();
        getline(cin,ds[i].name);
        getline(cin,ds[i].lop);
        cin >> ds[i].date >> ds[i].diem;
    }
}

string ChuanHoaName(string s)
{
    string Name;
    stringstream ss(s);
    vector <string> a;
    string temp;
    while(ss >> temp)
    {
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        a.push_back(temp);
    }
    for(int i=0;i<a.size();i++) a[i][0] = toupper(a[i][0]);
    for(string x : a) Name += x + " ";
    return Name;
}

void in(SinhVien ds[], int n)
{
    for(int i=1;i<=n;i++)
    {
        if(ds[i].date[2] != '/') ds[i].date.insert(ds[i].date.begin(),'0');
        if(ds[i].date[5] != '/') ds[i].date.insert(ds[i].date.begin()+3,'0');
        ds[i].name = ChuanHoaName(ds[i].name);
        cout << ds[i].code << " " << ds[i].name << ds[i].lop<< " " << ds[i].date << " " << fixed << setprecision(2) << ds[i].diem << endl;
    }
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
int z = 1;
class SinhVien
{  
public:
    int stt;
    string name,lop,date;
    double diem;
    friend istream& operator >>(istream&,SinhVien&);
    friend ostream& operator <<(ostream&,SinhVien&);
};
istream& operator >>(istream &is,SinhVien &a)
{
    is.ignore(1,'/n');
    a.stt = z;
    getline(is,a.name);
    getline(is,a.lop);
    getline(is,a.date);
    is>>a.diem;
    z++;
    return is;
}
ostream& operator <<(ostream &os,SinhVien &a)
{
    if(a.date[2]!='/') a.date.insert(a.date.begin(),'0');
    if(a.date[5]!='/') a.date.insert(a.date.begin()+3,'0');
    if(a.stt<10) os<<"B20DCCN00"<<a.stt<<" ";
    else os<<"B20DCCN0"<<a.stt<<" ";
    string temp;
    vector <string> s;
    stringstream ss(a.name);
    while(ss>>temp)
    {
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        s.push_back(temp);
    }
    for(int i=0;i<s.size();i++) s[i][0] = toupper(s[i][0]);
    for(int i=0;i<s.size();i++) os<<s[i]<<" ";
    os<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.diem<<endl;
    return os;
}

void sapxep(SinhVien ds[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (ds[j].diem < ds[j + 1].diem)
                swap(ds[j], ds[j + 1]);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
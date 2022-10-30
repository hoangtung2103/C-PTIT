#include <iostream>
#include <iomanip>
#include <string>
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
    is.ignore();
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
    os<<a.name<<" "<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.diem<<endl;
    return os;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
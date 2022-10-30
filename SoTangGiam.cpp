#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long long Pow(int a, int b){
    if(b==0) return 1;
    long long count = Pow(a,b/2);
    if(b%2==0) return count*count;
    else return count*count*a;
}
bool KTSNT(long long n){
    if(n<=1) return false;
    else{
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
bool KTTang(long long n)
{
    string a = to_string(n);
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>=a[i+1]) return false;
    }
    return true;
}
bool KTGiam(long long n)
{
    string a = to_string(n);
    for(int i=0;i<a.size()-1;i++){
        if(a[i]<=a[i+1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int dem = 0;
        long long x;
        cin >> x;
        long long bd = Pow(10,x-1);
        long long kt = Pow(10,x);
        cout << bd<<" "<<kt<<endl;
        for(long long i=bd;i<kt;i++){
            if(KTGiam(i)){
                if(KTSNT(i)) dem++;
            }
            if(KTTang(i)){
                if(KTSNT(i)) dem++;
            }
        }
        cout << dem << endl;
    }
}

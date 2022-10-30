#include <iostream>
#include <cmath>
using namespace std;
bool KTSNT(long long n){
    if(n<=1) return false;
    else{
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        int dem = 0;
        for(long long i=l;i<=r;i++){
            if(KTSNT(i)) dem++;
        }
        cout<<dem<<endl;
    }
}
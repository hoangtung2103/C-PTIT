#include <iostream>
#include <cmath>
using namespace std;
bool KTSNT(int n){
    if(n<=1) return false;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
int GCD(int a,int b){
    int r;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int dem = 0;
        for(int i=1;i<x;i++)
        {
            if(GCD(i,x)==1) dem++;
        }
        if(KTSNT(dem)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
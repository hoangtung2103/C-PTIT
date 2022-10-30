#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        long n;
        cin>>n;
        while(n%2==0){
            cout<<2<<" ";
            n/=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
        if(n>1) cout<<n;
        cout<<endl;
    }
}
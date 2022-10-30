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
int UocSNTmin(int n){
    int x;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            x = i;
            break;
        }
    }
    return x;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            if(i==1) cout<<1<<" ";
            else if(i%2==0) cout<<2<<" ";
            else if(KTSNT(i)) cout<<i<<" ";
            else cout<<UocSNTmin(i)<<" ";
        }
        cout<<endl;
    }
}
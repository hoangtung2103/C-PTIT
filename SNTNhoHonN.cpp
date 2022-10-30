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
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        for(int i=2;i<=n;i++){
            if(KTSNT(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
}
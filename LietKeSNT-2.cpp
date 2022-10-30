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
    int n;
    cin >> n;
    for(int t=0;t<n;t++){
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(KTSNT(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
}
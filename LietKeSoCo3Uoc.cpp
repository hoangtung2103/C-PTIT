#include <iostream>
#include <cmath>
using namespace std;
bool KiemTra(int n){
    if(ceil(sqrt(n))!=floor(sqrt(n))) return false;
    else{
        for(int i=2;i<sqrt(n);i++){
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
            if(KiemTra(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
}
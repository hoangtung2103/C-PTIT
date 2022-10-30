#include <iostream>
#include <cmath>
using namespace std;
bool KTsoSphenic(int n){
    int count = 0;
    for(int i=2;i<=n;i++){
        int x = 0;
        while(n%i==0){
            x++;
            n/=i;
        }
        if(x>1) return false;
        else if(x==1) count++;
    }
    if(count == 3) return true;
    else return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(KTsoSphenic(n)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
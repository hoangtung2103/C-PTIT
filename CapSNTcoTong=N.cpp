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
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int test = 0;
        for(int i=2;i<=x/2;i++){
            if(KTSNT(i)&&KTSNT(x-i)) {
                test = 1;
                cout<<i<<" "<<x-i<<endl;
                break;
            }
        }
        if(test == 0) cout<<-1<<endl;
    }
}
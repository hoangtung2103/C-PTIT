#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        long n,m;
        cin>>n>>m;
        int sum = 0;
        for(int i=1;i<=n;i++){
            sum += i%m;
        }
        if(sum==m) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
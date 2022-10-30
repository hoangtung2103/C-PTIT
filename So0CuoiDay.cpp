#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin>>n;
        long long a[n];
        long long b[n];
        int nb = 0;
        for(long i=0;i<n;i++) cin>>a[i];
        for(long i=0;i<n;i++){
            if(a[i]!=0){
                b[nb]=a[i];
                nb++;
            }
        }
        for(int i=nb;i<n;i++) b[i]=0;
        for(long i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
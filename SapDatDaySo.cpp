#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin>>n;
        long long a[n];
        long long b[n] = {0};
        long test = 0;
        for(long i=0;i<n;i++) cin>>a[i];
        for(long i=0;i<n;i++){
            for(long j=0;j<n;j++){
                if(a[j]==i) b[i] = a[j];
                if(a[j]==0) test = 1;
            }
        }
        for(long i=0;i<n;i++){
            if(b[i]==0) b[i]=-1;
        }
        if(test == 1) b[0] = 0;
        for(long i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
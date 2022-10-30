#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++) cin>>a[i];
        long gan = a[0]+a[1];
        for(long i=0;i<n-1;i++){
            for(long j=i+1;j<n;j++){
                if(abs(a[j]+a[i])<abs(gan)) gan = a[j]+a[i];
            }
        }
        cout<<gan<<endl;
    }
}
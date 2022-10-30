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
        long nho1 = a[0];
        for(long i=0;i<n;i++){
            if(a[i]<nho1) nho1 = a[i];
        }
        long nho2 = 100000000;
        for(long i=0;i<n;i++){
            if(a[i]<nho2&&a[i]>nho1) nho2=a[i];
        }
        if(nho2==100000000) cout<<-1<<endl;
        else cout<<nho1<<" "<<nho2<<endl;
    }
}
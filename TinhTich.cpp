#include <iostream>
using namespace std;
long long max(long long a[],long n){
    long long max = a[0];
    for(long i=0;i<n;i++){
        if(a[i]>max) max = a[i];
    }
    return max;
}
long long min(long long a[],long n){
    long long min = a[0];
    for(long i=0;i<n;i++){
        if(a[i]<min) min = a[i];
    }
    return min;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long n,m;
        cin>>n>>m;
        long long a[n], b[m];
        for(long i=0;i<n;i++) cin>>a[i];
        for(long i=0;i<m;i++) cin>>b[i];
        cout<<max(a,n)*min(b,m)<<endl;
    }
}
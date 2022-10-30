#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        long long x = 0;
        long long tmp;
        long long okla;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                tmp = a[i]*a[i]+a[j]*a[j];
                okla = sqrt(a[i]*a[i]+a[j]*a[j]);
                if(okla*okla == tmp){
                    if(binary_search(a,a+n,okla)){
                        cout << "YES\n";
                        x = 1;
                        break;
                    }
                }
            }
            if(x==1) break;
        }
        if(x==0) cout<<"NO\n";
    }
}
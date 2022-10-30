#include <iostream>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;
long long power_modulo(long long A, long long B) { 
    if (B == 0) return 1; 
    long long half = power_modulo(A, B / 2) % mod; 
    if (B%2==1) return (((half * half)%mod) * A) % mod; 
    else return (half * half) % mod; 
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long sum = 0;
        for(int i=0;i<n;i++){
            int z = n-i-1;
            sum += (a[i]*power_modulo(x,z))%mod;
        }
        cout<<sum%mod<<endl;
    }
}
#include <iostream> 
using namespace std;
long long power_modulo(long long A, long long B, long long M) { 
    if (B == 0) return 1; 
    long long half = power_modulo(A, B / 2, M) % M; 
    if (B%2==1) return (((half * half)%M) * A) % M; 
    else return (half * half) % M; 
} 
int main() { 
    int t; 
    cin>>t;
    while(t--){ 
        long long x,y,p; 
        cin>>x>>y>>p; 
        cout<<power_modulo(x,y,p)<<"\n"; 
    }
}
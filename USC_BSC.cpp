#include <iostream>
using namespace std;
long long GCD(long long a,long long b){
    long long r;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long a, b;
        cin >> a >> b;
        long long LCM = a*b/GCD(a,b);
        cout << LCM <<" "<< GCD(a,b)<<endl;
    }
}
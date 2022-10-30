#include <iostream>
using namespace std;
long long LCM(long long a,long long b){
    long long r;
    long long x=a,y=b;
    while (b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return x*y/a;
}
int main(){
    int n;
    cin >> n;
    for(int t=0;t<n;t++){
        int s;
        cin>>s;
        long long z = 1;
        for(int i=2;i<=s;i++){
            z = LCM(z,i);
        }
        cout<<z<<endl;
    }
}
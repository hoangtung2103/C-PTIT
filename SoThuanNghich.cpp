#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        long long a = x;
        long long y = 0;
        while(a>0){
            y = y*10 + a%10;
            a/=10;
        }
        if(x==y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
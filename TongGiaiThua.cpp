#include <iostream>
using namespace std;
long long GiaiThua(int n){
    if(n==1) return 1;
    return (n*GiaiThua(n-1));
}
int main(){
    int x;
    cin >> x;
    long long sum = 0;
    for(int i=1;i<=x;i++){
        sum = sum + GiaiThua(i);
    }
    cout << sum;
}
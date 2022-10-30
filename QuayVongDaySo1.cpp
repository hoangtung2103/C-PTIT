#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<x;i++) b[i] = a[i];
        for(int i=0;i<n-x;i++) a[i] = a[i+x];
        for(int i=n-x;i<n;i++) a[i] = b[i-n+x];
        for(int i=0;i<n;i++) cout << a[i] <<" ";
        cout << endl;
    }
}
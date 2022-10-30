#include <iostream>
#include <algorithm>
using namespace std;
typedef struct CauHoi{
    int L,R;
}CH;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        CH b[x];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<x;i++) cin >> b[i].L >> b[i].R;
        for(int i=0;i<x;i++){
            long sum = 0;
            for(int j=b[i].L;j<=b[i].R;j++) sum += a[j-1];
            cout << sum << endl;
        }
    }
}
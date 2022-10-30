#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dem = 0;
        long a[n],b[100000]={0};
        for(int i=0;i<n;i++){
            cin >> a[i];
            int x = a[i];
            b[x]++;
        }
        for(int i=0;i<n;i++){
            if(b[a[i]]>1){
                dem += b[a[i]];
                b[a[i]] = 0;
            }
        }
        cout << dem << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,x;
        cin >> n >> m;
        int a[n][m];
        int H[m]={0}, C[n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> x;
                a[i][j] = x;
                if(x==1){
                    C[i] = 1;
                    H[j] = 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(C[i]==1){
                for(int j=0;j<m;j++){
                    a[i][j] = 1;
                }
            }
        }
        for(int j=0;j<m;j++){
            if(H[j]==1){
                for(int i=0;i<n;i++){
                    a[i][j] = 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
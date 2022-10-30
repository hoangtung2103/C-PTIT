#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin >> a[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j<n) cout<<a[i][j]<<" ";
                else if(i<n&&j==n-1) cout<<a[i][j]<<" ";
                else if(i==n-1&&j<n) cout<<a[i][j]<<" ";
                else if(i<n&&j==0) cout<<a[i][j]<<" ";
                else cout<<"  ";
            }
            cout<<endl;
        }
    }
}
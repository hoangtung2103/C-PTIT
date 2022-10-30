#include <iostream>
using namespace std;
int main(){
        int n;
        cin >> n;
        int so1,so0;
        int dem = 0;
        int a[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++) cin >> a[i][j];
        }
        for(int i=0;i<n;i++){
            so1 = 0, so0 = 0;
            for(int j=0;j<3;j++){
                if(a[i][j]==1) so1++;
                if(a[i][j]==0) so0++;
            }
            if(so1>so0) dem++;
        }
    cout<<dem;
}
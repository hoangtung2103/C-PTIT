#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int h,c;
        cin >> h >> c;
        int cnt;
        int a[h][c];
        int b[h*c];
        for(int i=0;i<h;i++){
            for(int j=0;j<c;j++) cin >> a[i][j];
        }
        int hang = h-1, cot = c-1, d = 0, x = 0;
        while(x<h*c){
            for(int i=d;i<=cot;i++) b[x++] = a[d][i];
            for(int i=d+1;i<=hang;i++) b[x++] = a[i][cot];
            for(int i=cot-1;i>=d;i--) b[x++] = a[hang][i];
            for(int i=hang-1;i>=d+1;i--) b[x++] = a[i][d];
            d++;
            hang--;
            cot--;
        }
        for(int i=0;i<h*c;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
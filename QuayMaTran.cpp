#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cin >> a[i][j];
        }
        int h1 = 0, h2 = m-1, c1 = 0, c2 = n-1;
        while(h1<h2 && c1<c2){
            int pre = a[h1+1][c1];
            for(int i=c1;i<=c2;i++){
                int cnt = a[h1][i];
                a[h1][i] = pre;
                pre = cnt;
            }
            h1++;
            for(int i=h1;i<=h2;i++){
                int cnt = a[i][c2];
                a[i][c2] = pre;
                pre = cnt;
            }
            c2--;
            for(int i=c2;i>=c1;i--){
                int cnt = a[h2][i];
                a[h2][i] = pre;
                pre = cnt;
            }
            h2--;
            for(int i=h2;i>=h1;i--){
                int cnt = a[i][c1];
                a[i][c1] = pre;
                pre = cnt;
            }
            c1++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cout<< a[i][j] << " ";
        }
        cout<<endl;
    }
    
}
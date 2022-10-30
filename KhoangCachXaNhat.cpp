#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int Max = 0;
        int cnt;
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>=i+1;j--){
                if(a[i]<=a[j]){
                    cnt = j-i;
                    break;
                }
            }
            Max = max(Max,cnt);
        }
        cout << Max << endl;
    }
    
}
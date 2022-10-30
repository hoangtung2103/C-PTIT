#include <iostream>
#include <vector>
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
        vector <int> s;
        for(int i=0;i<n-1;i++){
            int ok = 0;
            if(a[i]!=0&&a[i]==a[i+1]){
                s.push_back(a[i]*2);
                ok = 1;
            }
            if(a[i]!=0&&a[i]!=a[i+1]){
                s.push_back(a[i]);
            }
            if(ok == 1) a[i+1] = 0;
        }
        if(a[n-1]!=0) s.push_back(a[n-1]);
        for(int x : s) cout << x << " ";
        int db = n - s.size();
        for(int i=0;i<db;i++) cout << 0 << " ";
        cout << endl;
    }
    
}
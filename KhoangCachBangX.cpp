#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int z = 0;
        for(int i=0;i<n;i++){
            if(binary_search(a,a+n,a[i]+x)){
                cout << 1 <<endl;
                z = 1;
                break;
            }
        }
        if(z==0) cout<<-1<<endl;
    }
}
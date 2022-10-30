#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin >> a[i];
        int ok = 0;
        int sum1 = a[1],sum2 = 0;
        if(n<3) cout<<-1<<endl;
        else{
            for(int i=3;i<=n;i++) sum2 += a[i];
            for(int i=2;i<n;i++){
                if(sum1 == sum2){
                    ok = 1;
                    cout << i <<endl;
                    break;
                }
                sum1 += a[i];
                sum2 -= a[i+1];
            }
            if(ok == 0) cout<<-1<<endl;
            }
    }   
}
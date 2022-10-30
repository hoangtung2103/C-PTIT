#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int max = -1, test = -1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    test = 1;
                    if(a[j]-a[i]>max) max = a[j]-a[i];
                }
            }
        }
        if(test == 1) cout<<max<<endl;
        if(test == -1) cout<<test<<endl;
    }
}
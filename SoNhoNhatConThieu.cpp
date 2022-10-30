#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<long>a;
        for(int i=0;i<n-1;i++){
            long x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int test = 0;
        if(a[0]==1){
            for(int i=0;i<a.size()-1;i++){
                if(a[i+1]-a[i]>1){
                    cout<<a[i]+1<<endl;
                    test = 1;
                    break;
                }
            }
            if(test == 0) cout<<a[a.size()-1]+1<<endl;
        } else cout<<1<<endl;
    }
}
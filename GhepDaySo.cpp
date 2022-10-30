#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<int> a;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x;
                cin >> x;
                a.push_back(x);
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
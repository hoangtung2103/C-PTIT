#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x;
        vector<int> v;
        bool check = false;
        for(int i=0;i<n; i++) {
            cin>>x;
            if(x>0) {
                v.push_back(x);
            }
            if(x==1) {
                check = true;
            }
        }
        if(!check) {
            cout<<1<<endl;
        } else {
            check = false;
            sort(v.begin(), v.end());
            for(int i=0; i<v.size()-1; i++) {
                if((v[i+1]-v[i])>1) {
                    cout<<v[i]+1<<endl;
                    check = true;
                    break;
                }
            }
            if(!check) {
                cout<<v[v.size()-1]+1<<endl;
            }
        }
    }
}
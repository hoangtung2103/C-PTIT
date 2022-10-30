#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        int n; 
        cin>>n;  
        multiset<int>ms; 
        for(int i=0;i<n;i++){ 
            set<int>s; 
            for(int j=0;j<n;j++){ 
                int z;
                cin>>z; 
                s.insert(z); 
            }
            for(int x:s){ 
                ms.insert(x); 
            } 
        } 
        vector<int>u; 
        for(int x:ms) u.push_back(x); 
        int tung=0; 
        for(int i=0;i<u.size();i++){ 
            int cnt=1; 
            while(u[i]==u[i+1]){ 
                cnt++; 
                i++; 
            } 
            if(cnt==n) tung++; 
        } 
        cout<<tung<<endl; 
    } 
}

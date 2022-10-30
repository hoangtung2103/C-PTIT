#include <iostream>
#include <algorithm>
#include <vector>
bool kiemtra(const std::vector<int>s,int n){
    for(int i=0;i<s.size();i++){
        if(s[i]==n) return false;
    } return true;
}
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        vector <int> s;
        for(int i=0;i<n;i++){
            while(a[i]>0){
                int z = a[i]%10;
                if(kiemtra(s,z)) s.push_back(z);
                a[i]/=10;
            }
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
        cout << endl;
    }
}
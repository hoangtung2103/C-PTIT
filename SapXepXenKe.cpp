#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n%2==0){
            int x=n-1;
            for(int i=0;i<n/2;i++){
                cout<<a[x]<<" "<<a[i]<<" ";
                x--;
            }
        }else{
            int y=n-1;
            for(int i=0;i<(n-1)/2;i++){
                cout<<a[y]<<" "<<a[i]<<" ";
                y--;
            }
            cout<<a[(n-1)/2];
        }
        cout<<endl;
    }
}
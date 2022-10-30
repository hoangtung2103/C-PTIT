#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int test = -1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                test = 1;
                break;
            }
        }
        cout<<test<<endl;
    }
}
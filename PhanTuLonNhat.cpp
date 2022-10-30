#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while (x--){
        long n;
        cin>>n;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long max = a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max) max = a[i];
        }
        cout<<max<<endl;
    }
}
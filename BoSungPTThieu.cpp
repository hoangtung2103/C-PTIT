#include <iostream>
using namespace std;
int max(int a[],int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max = a[i];
    }
    return max;
}
int min(int a[],int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min) min = a[i];
    }
    return min;
}
bool ktra(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return true;
    } return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int R = min(a,n);
        int L = max(a,n);
        int dem = 0;
        for(int i=R+1;i<L;i++){
            if(!ktra(a,n,i)) dem++;
        }
        cout<<dem<<endl;
    }
}
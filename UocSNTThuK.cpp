#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n,k;
        cin>>n>>k;
        vector<int>a;
        while(n%2==0){
            a.push_back(2);
            n/=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                a.push_back(i);
                n/=i;
            }
        }
        if(n>1) a.push_back(n);
        if(k<=a.size()){
            cout<<a[k-1]<<endl;
        }else cout<<-1<<endl;
    }
}
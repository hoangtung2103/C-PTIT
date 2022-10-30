#include <iostream>
using namespace std;
void Fibonaci(int a){
    if(a==0||a==1){
        cout<<a<<endl;
    }
    long long fn;
    long long f0 = 0, f1=1;
    if(a>=2){
        for(int i=2;i<=a;i++){
            fn=f0+f1;
            f0=f1;
            f1=fn;
        }
        cout<<fn<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        Fibonaci(n);
    }
}
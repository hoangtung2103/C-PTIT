#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        long n;
        cin>>n;
        int z = 2;
        while(z<=n/z){
            if(n%z==0) n/=z;
            else z++;
        }
        cout<<n<<endl;
    }
}
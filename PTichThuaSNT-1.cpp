#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        int x;
        cin >> x;
        for(int z=2;z<=x;z++){
            int dem = 0;
            while(x%z==0){
                dem++;
                x/=z;
            }
            if(dem!=0) cout << z <<" "<< dem <<" ";
        }
        cout << endl;
    }
}
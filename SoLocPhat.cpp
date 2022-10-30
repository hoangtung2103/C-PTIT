#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int test = 1;
        while(x>0){
            int z=x%10;
            if(z!=0 && z!=6 && z!=8) test = 0;
            x/=10;
        }
        if(test == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
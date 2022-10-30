#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        int x = a%10;
        a/=10;
        int test = 1;
        while(a>0){
            int y = a%10;
            if(abs(x-y)!=1) test = 0;
            a/=10;
            x = y;
        }
        if(test == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
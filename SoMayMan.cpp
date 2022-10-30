#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%100==86) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
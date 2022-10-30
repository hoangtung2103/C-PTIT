#include <iostream>
#include <cmath>
using namespace std;
bool CanBang(int n){
    int chan = 0, le = 0;
    int a = n;
    while(a>0){
        int x = a%10;
        if(x%2==0) chan++;
        else le++;
        a/=10;
    }
    if(chan == le) return true;
    else return false;
}
int main(){
    int x;
    cin >> x;
    int dem = 0;
    int start = pow(10,x-1);
    int end = pow(10,x)-1;
    for(int i=start;i<=end;i++){
        if(CanBang(i)){
            cout << i <<" ";
            dem++;
            if(dem%10==0) cout << endl;
        }
    }
}
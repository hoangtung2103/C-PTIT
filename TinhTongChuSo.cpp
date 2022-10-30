#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x<10) cout << x <<endl;
        else{
            while(x>=10){
                int sum = 0;
                while(x>0){
                    sum += x%10;
                    x/=10;
                }
                x = sum;
            }
            cout << x << endl;
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char kitu = ' ';
        int c = 0, l = 0,n = 0;
        while(kitu != '\n'){
            int x;
            cin >> x;
            n++;
            x%2 == 0 ? c++ : l++;
            kitu = getchar();
        }
        if((n%2==0&&c>l)||(n%2==1&&c<l)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
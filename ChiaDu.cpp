#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int a,m;
        cin>>a>>m;
        int test = 0;
        for(int i=0;i<m;i++){
            if((a*i)%m==1){
                cout<<i<<endl;
                test = 1;
                break;
            }
        }
        if(test == 0) cout<<-1<<endl;
    }
}
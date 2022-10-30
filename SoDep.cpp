#include <iostream>
#include <string>
using namespace std;
int KiemTraChan(string a){
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9') return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin,a);
        int test = 1;
        if(KiemTraChan(a)){
            int x=0;
            for(int j=a.length()-1;j>=0;j--){
                if(a[j]!=a[x]) test = 0;
                x++;
            }
            if(test == 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}
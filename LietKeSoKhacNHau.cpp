#include <iostream>
#include <algorithm>
using namespace std;
int KiemTra(int x,int b[],int nb){
    for(int z=0;z<nb;z++){
        if(x==b[z]) return 0;
    } return 1;
}
int main(){
    int n;
    cin>>n;
    int nb = 1;
    int a[100];
    int b[100];
    for(int i=0;i<n;i++) cin >> a[i];
    b[0] = a[0];
    for(int i=1;i<n;i++){
        if(KiemTra(a[i],b,nb)){
            b[nb]=a[i];
            nb++;
        }
    }
    sort(b,b+nb);
    for(int i=0;i<nb;i++) cout<<b[i]<<" ";
}
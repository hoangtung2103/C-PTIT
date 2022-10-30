#include <iostream>
using namespace std;
void Nhan2MaTran(int a[50][50],int b[50][50],int e[50][50],int m,int n,int p){
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            e[i][j]=0;
            for(int t=0;t<n;t++){
                e[i][j] += a[i][t]*b[t][j];
            }
        }
    }
}
int main(){
    int m,n,p;
    cin >> m >> n >> p;
    int a[50][50];
    int b[50][50];
    int c[50][50];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++) cin >> b[i][j];
    }
    Nhan2MaTran(a,b,c,m,n,p);
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++) cout<<c[i][j]<<" ";
        cout << endl;
    }
}
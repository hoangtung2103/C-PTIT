#include <iostream>
#include <algorithm>
using namespace std;
void KhoiTao(int a[], int n)
{
    for(int i=1;i<=n;i++) a[i] = i;
}

void SinhHoanVi(int a[], int n, int &ok)
{
    int i = n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok = 0;
    else{
        for(int j=n;j>i;j--){
            if(a[j] > a[i]){
                swap(a[j],a[i]);
                break;
            }
        }
        reverse(a+i+1,a+n+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ok = 1;
        cin >> n;
        int a[n+1];
        KhoiTao(a,n);
        while(ok==1){
            for(int i=1;i<=n;i++) cout<<a[i];
            SinhHoanVi(a,n,ok);
            cout<<" ";
        }
        cout<<endl;
    }
}
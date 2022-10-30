#include <iostream>
using namespace std;

void KhoiTao(int a[],int k)
{
    for(int i=1;i<=k;i++) a[i] = i;
}

void SinhToHop(int a[],int n,int k,int &ok)
{
    int i = k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j] = a[j-1]+1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,ok = 1;
        cin >> n >> k;
        int a[k+1];
        KhoiTao(a,k);
        while(ok)
        {
            for(int i=1;i<=k;i++) cout<<a[i];
            cout << " ";
            SinhToHop(a,n,k,ok);
        }
        cout << endl;
    }
}
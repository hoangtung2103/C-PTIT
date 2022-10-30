#include <iostream>
#include <stdlib.h>
using namespace std;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int na;
        cin>>na;
        int a[na];
        for(int i=0;i<na;i++) cin>>a[i];
        qsort(a,na,sizeof(int),cmpfunc);
        int min = 999999999;
        for(int i=0;i<na-1;i++){
            if(a[i+1]-a[i]<min) min = a[i+1]-a[i];
        }
        cout<<min<<endl;
    }
}
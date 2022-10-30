#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        while(1)
        {
            int n = s.find("100");
            if(n>s.size() || n<0) break;
            else{
                s.erase(n,3);
                cnt += 3;
            }
        }
        if(cnt != 0) cout << cnt << endl;
    }
}
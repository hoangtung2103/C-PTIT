#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> s >> n;
        int cnt = 0;
        for(int i=0;i<s.length();i++)
        {
            set <char> z;
            for(int j=i;j<s.length();j++)
            {
                z.insert(s[j]);
                if(z.size()==n) cnt++;
                if(z.size()>n) break;
            }
        }
        cout << cnt << endl;
    }
    
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll res = 0;
        ll a = 1;
        for (ll i = s.size() - 1; i >= 0; --i) {
            if (s[i] == '1') {
                res += a;
                res %= 5;
            }
            a *= 2;
            a %= 5;
        }
        res == 0 ? cout << "Yes" : cout << "No";
        cout << endl;
    }
}
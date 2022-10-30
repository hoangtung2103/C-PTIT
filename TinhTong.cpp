#include <bits/stdc++.h>
using namespace std;

bool KiemTra(string s)
{
    if(s.size() > 9) return false;
    else{
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])) return false;
        }
        return true;
    }
}
int main()
{
    ifstream in_file("DATA.in");
    string s;
    long long sum = 0;
    while(in_file >> s)
    {
        if(KiemTra(s)){
            int x = stoi(s);
            sum += x;
        }
    }
    cout<<sum;
    in_file.close();
}
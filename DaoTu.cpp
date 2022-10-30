#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        string temp;
        stringstream ss(s);
        vector <string> a;
        while(ss >> temp)
        {
            a.push_back(temp);
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
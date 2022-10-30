#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    int x = a.find(b);
    int pos = b.length();
    string c = a.erase(x,pos);
    cout << c;
}
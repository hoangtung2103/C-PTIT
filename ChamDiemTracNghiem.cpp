#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string de101 = "101 A B B A D C C A B D C C A B D";
    string de102 = "102 A C C A B C D D B B C D D B B";
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string x;
        getline(cin,x);
        double point = 0;
        if(x[2] == de101[2]){
            for(int i=4;i<=32;i+=2){
                if(x[i] == de101[i]) point += (float)2/3;
            }
        }
        else if(x[2] == de102[2]){
            for(int i=4;i<=32;i+=2){
                if(x[i] == de102[i]) point += (float)2/3;
            }
        }
        cout << fixed << setprecision(2) << point << endl;
    }
}
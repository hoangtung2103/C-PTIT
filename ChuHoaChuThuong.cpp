#include <iostream>
#include <string.h>
using namespace std;
void CHCT(char x){
    if(x>='A'&&x<='Z'){
        char t = tolower(x);
        cout << t << endl;
    }
    if(x>='a'&&x<='z'){
        char t = toupper(x);
        cout << t << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char x{1};
        cin >> x;
        CHCT(x);
    }
}
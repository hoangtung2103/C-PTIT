#include <iostream>
int main(){
    int x;
    std :: cin >> x ;
    for(int t=0;t<x;t++){
        long long sum = 0;
        int n;
        std::cin >> n;
        sum = n + ((n-1)*(long double)n/2);
        std::cout << sum << std::endl;
    }

}
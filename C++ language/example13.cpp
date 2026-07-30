#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    if(n==k){
        cout << "1";
    }
    else if(k<n){
        cout << "0";
    }
    else{
        cout << k/n;
    }
    return 0;
}
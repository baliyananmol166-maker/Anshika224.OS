#include <iostream>
using namespace std;
int main() {
    int n,x,y;
    cin >> n >> x >> y;
    int ans1 = n*x;
    int ans2 = (n-1)*y/2 + (n%2)*x;
    if(ans1>ans2){
        cout << ans1;
    }
    else{
        cout << ans2;
    }
    return 0;
}
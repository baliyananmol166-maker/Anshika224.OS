#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x,y;
    cin>> x >> y;
    int t = max(x,y);
    while((t-y)%2 !=0){
        t++;
    }
    int operations = (t-x)+(t-y)/2;
    cout<<operations;
    return 0;
}
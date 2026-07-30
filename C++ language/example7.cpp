#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int i=1;
    while(a<b){
        if(i%2==0){
           a=a+2;
        }
        else{
            a=a+1;
            i=i+1;
        }
    }
    if(a==b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
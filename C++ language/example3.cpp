#include<iostream>
using namespace std;
int main() {
    int d,x,y,z;
    cin>> d>> x >> y>> z;
    int total1 = 7*x;
    int total2 = d*y + (7-d)*z;
    if(total1>total2){
       cout<<total1;
    }
    else{
        cout<<total2;
    }
    return 0;
}
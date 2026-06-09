//example of enum in C++
#include<iostream>
using namespace std;
int main() {
    enum months{January,February,March,April,May,June,July,August,September,November,December};
    
        months m;
        m=March;
        cout<<"Month is: "<<m+1<<endl;
        return 0;
    
}
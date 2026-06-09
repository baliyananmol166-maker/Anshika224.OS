//another example of enum
#include <iostream>
using namespace std;
int main() {
    enum colors {red, blue, green, yellow};
    colors select=yellow;
    switch(select){
        case red:
        cout<<"it is red";
        break;
        case green:
        cout<<"it is green";
        break;
        case yellow:
        cout<<"it is yellow";
        break;
    }
    return 0;
}
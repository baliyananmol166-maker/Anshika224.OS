//another example of enum in C++
#include <iostream>
using namespace std;
int main() {
    enum mobiles {BatteryCapacity=1,CameraQuality=2,LargeStorage=3};
    //enum with flags
        int feature=CameraQuality | LargeStorage;
        cout<<feature<<endl;
        return 0;
}
#include <iostream>
using namespace std;
int main() {
       // -10^9 <length <10^9
       // -10^9 <breadth <10^9

    int length, breadth;
    cin >> length >> breadth;
    // area of rectangle = length * breadth
    long long int area = (long long int)length * 1ll * (long long int) breadth;
    cout << area;
    
    
 
    return 0;
}

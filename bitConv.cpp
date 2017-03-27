#include <iostream>
#include <string>
#include <sstream>

// Not entirely type safe but it converts
// any integer to a ledgable binary string
template <class T>
std::string bitConv(T in) {
    std::stringstream ss;
    for( int i = 8*sizeof(T)-1; i >= 0 ; i-- ) {
        ss << ( 0x0001 & (in >> i) );
    }
    return ss.str();
}

int main() {
int number = 25;
long long int num2 = 35;
std::cout << bitConv(number) <<std::endl;
std::cout <<bitConv(num2) <<std::endl;
}

#include <iostream>
#include <string>
#include <sstream>

// Not entirely type safe but it converts
// any integer to a ledgable binary string
// the second optional argument will truncate
// the return value to a specified number of bits
template <class T> std::string bitConv(T in, unsigned bits = 8*sizeof(T)) {
    std::stringstream ss;
    for( int i = 8*sizeof(T)-1; i >= 0 ; i-- ) {
        ss << ( 0x0001 & (in >> i) );
    }
    long pos = ss.tellp();
    return ss.str().substr(pos - bits,bits);
}

int main() {
int number = 25;
long long int num2 = 35;
std::cout << bitConv(number) <<std::endl;
std::cout <<bitConv(num2,16) <<std::endl;
}

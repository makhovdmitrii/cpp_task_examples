#include <iostream>
// https://youtu.be/LDoCQzSd3xo?t=3704
int main()
{
	unsigned short x = 0xFFFE, y = 0xEEEE; // x * y = 0xEEEC2224
	unsigned short v = x * y; // 0x2224
	unsigned w = x * y; //signed int x * y than 0xEEEC2224
	unsigned long long z = x * y; //signed int x * y than 0xFFFFFFFFEEEC2224
	std::cout << "x = " << std::hex << x << " y =  " << y << "\n";
	std::cout << "v = " << std::hex << v << "\n";
	std::cout << "w = " << std::hex << w << "\n";
	std::cout << "z = " << std::hex << z << "\n";
}
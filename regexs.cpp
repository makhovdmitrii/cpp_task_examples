#include <iostream>
#include <regex>
/*
* g++ --std=c++17 regexes.cpp
*/
// https://youtu.be/9WIPP5Bgii0?t=4389
int main()
{
	const std::regex r1("(c(a|b)*ab)*ca");
	std::cmatch m;
	bool res1 = std::regex_match ("caabca", m, r1);
	bool res2 = std::regex_match ("cbbbab", m, r1);
	std::cout << std::boolalpha << res1 << " " << res2 << std::endl;
}

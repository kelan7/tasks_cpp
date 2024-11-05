#include <iostream>
#include<string>




int main()
{
	std::string str = "hello";
	std::string::size_type length = str.size();
	std::string s = "k";
	//std::string::size_type i = str.find_last_of(s);
	size_t i = str.find_last_of(s);
	//size_t is = str.find_first_of(s);
	std::cout << i << std::endl;
	return 0;
}


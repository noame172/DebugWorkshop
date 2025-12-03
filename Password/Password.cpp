#include <iostream>
#include <vector>
#include <string>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::string buffer = "";

	std::cin >> buffer;
	int maxSize = (buffer.size() > 16) ? 16 : buffer.size();
	for (int i = 0; i < maxSize; i++) {
		pwd.value[i] = buffer[i];
	}

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}

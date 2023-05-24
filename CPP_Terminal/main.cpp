// Test file to show use case of CPP Terminal

#include <iostream>
#include "Source/cpp_terminal.h"

int main()
{
	Essentials::Utilities::Terminal term;
	std::cout << Essentials::Utilities::TerminalVersion << "\n" << std::endl;

	std::string input;
	std::string result;
	while (std::getline(std::cin, input))
	{
		if (term.ExecuteCommand(input, result) < 0)
		{
			std::cout << "ERROR!\n" + term.GetLastError() << std::endl;
		}
		else
		{
			std::cout << result;
			result.clear();
		}
	}

	return 0;
}
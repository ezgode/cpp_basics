#include "SharedBuffer.h"
#include<iostream>

int main(int argc, char const *argv[])
{
	/* code */
	std::cout << "main::starting" << std::endl;
	SharedBuffer example_class {1};
	std::cout << "main::ending" << std::endl;
	return 0;
}
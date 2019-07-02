//#include <string.h>
#include "Header.h"
//#include "evm.cpp"

int main() {
	Evm comp1("Pentium-III", 233, 0, 'C');
	Evm comp2("AMD-K6", 166, 0, 'C');
	Evm comp3("PowerPC-620", 2000, 0, 'R');
	std::cout << "Before:";
	comp1.show();
	comp2.show();
	comp3.show();
	comp3 = comp1 + comp2;
	comp1 = comp3;
	std::cout << "After" << std::endl;
	comp1.show();
	comp2.show();
	comp3.show();
	if (comp2 == comp3) 
		std::cout << "Comparison issued True\n";
	else
		std::cout << "Comparison issued False\n";

	if (comp1 == comp2) 
		std::cout << "Comparison issued True\n";
	else
		std::cout << "Comparison issued False\n";
	if (comp1 == comp3)
		std::cout << "Comparison issued True\n";
	else
		std::cout << "Comparison issued False\n";
	system("pause");
	return 0;
}


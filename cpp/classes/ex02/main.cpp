#include "fraction.hpp"

int main() {
	Fraction f1 {2, 4};
	std::cout << "f1:\n";
	f1.printFraction();
	std::cout << std::endl;

	Fraction f2 = f1;
	std::cout << "f2:\n";
	f2.printFraction();
	std::cout << std::endl;

	Fraction f3 = std::move(f2);
	std::cout << "f3:\n";
	f3.printFraction();
	std::cout << std::endl;

	std::cout << "f2:\n";
	f2.printFraction();
	std::cout << std::endl;

	std::cout << "f4\n";
	Fraction f4 = f1 * f3;
	f4.printFraction();
	return 0;
}


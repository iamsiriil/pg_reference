#include "myclass.hpp"

int main() {

	MyClass mc(12);
	MyClass mc2;

	mc2 = mc;
	std::cout << "the data in mc2 is : " << mc2.getData() << "\n";

	MyClass mc3 = std::move(mc2);
	std::cout << "the data in mc3 is : " << mc3.getData() << "\n";
	return 0;
}


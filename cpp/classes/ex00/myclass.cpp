#include "myclass.hpp"

MyClass::MyClass() : data(nullptr) {
	std::cout << "new instance of the class MyClass\n";
}

MyClass::MyClass(int nbr) {
	data = new int;
	*data = nbr;
	std::cout << "new instance of class MyClass with nbr " << nbr << "\n";
}

MyClass::MyClass(const MyClass& other) {
	data = new int;
	*data = *other.data;
	std::cout << "copy constructor called\n";
}

MyClass& MyClass::operator=(const MyClass& other) {
	std::cout << "copy assignment operator\n";
	if (this != &other) {
		delete data;

		data = new int;
		*data = *other.data;
	}
	return *this;
}

MyClass::MyClass(MyClass&& other) noexcept : data(other.data) {
	other.data = nullptr;
	std::cout << "move constructor: Data moved\n";
}

MyClass& MyClass::operator=(MyClass&& other) noexcept {
	std::cout << "move assignement operator\n";
	if (this != &other) {
		delete data;

		data = other.data;
		other.data = nullptr;
	}
	return *this;
}

MyClass::~MyClass() {
	if (data) delete data;
}

int MyClass::getData() const {
	if (data) return *data;
	throw std::runtime_error("Attempted to access moved-from object");
}

